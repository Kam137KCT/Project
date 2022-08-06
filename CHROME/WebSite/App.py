import pygame

# Initialize The PyGame
pygame.init()

# Variables
Width = 300
Height = 300

# Create The Window
Win = pygame.display.set_mode((Width, Height))

# Title & Icon
pygame.display.set_caption('Space Invaders')
# Icon = pygame.image.load('UFO.png')
# pygame.display.set_icon(Icon)

Run = True
while Run:
	for event in pygame.event.get():
		if event.type == pygame.QUIT:
			Run = False