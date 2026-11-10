/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fb3b18; name: FUN_00fb3b18
 */


void FUN_00fb3b18(long param_1)

{
  char *pcVar1;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [64];
  
  if (*(char *)(param_1 + 0x158) == '\0') {
    if ((((*(long *)(param_1 + 0x48) != 0) &&
         ((*(byte *)(*(long *)(param_1 + 0x48) + 0x1e8) & 1) != 0)) &&
        (*(long *)(param_1 + 0x88) != 0)) &&
       ((*(byte *)(*(long *)(param_1 + 0x88) + 0x1e8) & 1) != 0)) {
      FUN_00fb9e50(&local_c8,param_1 + 0x80,param_1 + 0x40);
      *(undefined8 *)(param_1 + 200) = uStack_c0;
      *(undefined8 *)(param_1 + 0xd0) = local_b8;
      *(undefined8 *)(param_1 + 0xc0) = local_c8;
      FUN_00fb9ce0(param_1 + 0xd8,auStack_b0);
      FUN_00fb9ce0(param_1 + 0x118,auStack_70);
      FUN_00db239c(auStack_70);
      FUN_00db239c(auStack_b0);
      *(undefined1 *)(param_1 + 0x158) = 1;
      goto LAB_00fb3b38;
    }
    if (*(char *)(param_1 + 0x158) != '\0') goto LAB_00fb3b38;
  }
  else {
LAB_00fb3b38:
    if (*(char *)(param_1 + 0x159) == '\0') {
      FUN_00fb4ed4(param_1);
      *(undefined1 *)(param_1 + 0x159) = 1;
    }
  }
  if (*(char *)(param_1 + 0x2c0) == '\0') {
    if (((*(long *)(param_1 + 0x1b0) != 0) &&
        ((*(byte *)(*(long *)(param_1 + 0x1b0) + 0x1e8) & 1) != 0)) &&
       ((*(long *)(param_1 + 0x1f0) != 0 &&
        ((*(byte *)(*(long *)(param_1 + 0x1f0) + 0x1e8) & 1) != 0)))) {
      FUN_00fb9e50(&local_c8,param_1 + 0x1e8,param_1 + 0x1a8);
      *(undefined8 *)(param_1 + 0x238) = local_b8;
      *(undefined8 *)(param_1 + 0x230) = uStack_c0;
      *(undefined8 *)(param_1 + 0x228) = local_c8;
      FUN_00fb9ce0(param_1 + 0x240,auStack_b0);
      FUN_00fb9ce0(param_1 + 0x280,auStack_70);
      FUN_00db239c(auStack_70);
      FUN_00db239c(auStack_b0);
      *(undefined1 *)(param_1 + 0x2c0) = 1;
      goto LAB_00fb3b48;
    }
    if (*(char *)(param_1 + 0x2c0) != '\0') goto LAB_00fb3b48;
  }
  else {
LAB_00fb3b48:
    if (*(char *)(param_1 + 0x2c1) == '\0') {
      FUN_00fc3ef8(param_1);
      *(undefined1 *)(param_1 + 0x2c1) = 1;
    }
  }
  if (*(char *)(param_1 + 0x418) == '\0') {
    if (((*(long *)(param_1 + 0x308) != 0) &&
        ((*(byte *)(*(long *)(param_1 + 0x308) + 0x1e8) & 1) != 0)) &&
       ((*(long *)(param_1 + 0x348) != 0 &&
        ((*(byte *)(*(long *)(param_1 + 0x348) + 0x1e8) & 1) != 0)))) {
      FUN_00fb9e50(&local_c8,param_1 + 0x340,param_1 + 0x300);
      *(undefined8 *)(param_1 + 0x390) = local_b8;
      *(undefined8 *)(param_1 + 0x388) = uStack_c0;
      *(undefined8 *)(param_1 + 0x380) = local_c8;
      FUN_00fb9ce0(param_1 + 0x398,auStack_b0);
      FUN_00fb9ce0(param_1 + 0x3d8,auStack_70);
      FUN_00db239c(auStack_70);
      FUN_00db239c(auStack_b0);
      *(undefined1 *)(param_1 + 0x418) = 1;
      goto LAB_00fb3b58;
    }
    if (*(char *)(param_1 + 0x418) != '\0') goto LAB_00fb3b58;
  }
  else {
LAB_00fb3b58:
    if (*(char *)(param_1 + 0x419) == '\0') {
      FUN_00fbccd4(param_1);
      *(undefined1 *)(param_1 + 0x419) = 1;
    }
  }
  if (*(char *)(param_1 + 0x570) == '\0') {
    if ((((*(long *)(param_1 + 0x460) != 0) &&
         ((*(byte *)(*(long *)(param_1 + 0x460) + 0x1e8) & 1) != 0)) &&
        (*(long *)(param_1 + 0x4a0) != 0)) &&
       ((*(byte *)(*(long *)(param_1 + 0x4a0) + 0x1e8) & 1) != 0)) {
      FUN_00fb9e50(&local_c8,param_1 + 0x498,param_1 + 0x458);
      *(undefined8 *)(param_1 + 0x4e8) = local_b8;
      *(undefined8 *)(param_1 + 0x4e0) = uStack_c0;
      *(undefined8 *)(param_1 + 0x4d8) = local_c8;
      FUN_00fb9ce0(param_1 + 0x4f0,auStack_b0);
      FUN_00fb9ce0(param_1 + 0x530,auStack_70);
      FUN_00db239c(auStack_70);
      FUN_00db239c(auStack_b0);
      *(undefined1 *)(param_1 + 0x570) = 1;
      goto LAB_00fb3b68;
    }
    if (*(char *)(param_1 + 0x570) != '\0') goto LAB_00fb3b68;
  }
  else {
LAB_00fb3b68:
    if (*(char *)(param_1 + 0x571) == '\0') {
      FUN_00fc5df0(param_1);
      *(undefined1 *)(param_1 + 0x571) = 1;
    }
  }
  if (*(char *)(param_1 + 0x6c8) == '\0') {
    if (((*(long *)(param_1 + 0x5b8) != 0) &&
        ((*(byte *)(*(long *)(param_1 + 0x5b8) + 0x1e8) & 1) != 0)) &&
       ((*(long *)(param_1 + 0x5f8) != 0 &&
        ((*(byte *)(*(long *)(param_1 + 0x5f8) + 0x1e8) & 1) != 0)))) {
      FUN_00fb9e50(&local_c8,param_1 + 0x5f0,param_1 + 0x5b0);
      *(undefined8 *)(param_1 + 0x640) = local_b8;
      *(undefined8 *)(param_1 + 0x638) = uStack_c0;
      *(undefined8 *)(param_1 + 0x630) = local_c8;
      FUN_00fb9ce0(param_1 + 0x648,auStack_b0);
      FUN_00fb9ce0(param_1 + 0x688,auStack_70);
      FUN_00db239c(auStack_70);
      FUN_00db239c(auStack_b0);
      *(undefined1 *)(param_1 + 0x6c8) = 1;
      goto LAB_00fb3b78;
    }
    if (*(char *)(param_1 + 0x6c8) != '\0') goto LAB_00fb3b78;
  }
  else {
LAB_00fb3b78:
    if (*(char *)(param_1 + 0x6c9) == '\0') {
      FUN_00fc0510(param_1);
      *(undefined1 *)(param_1 + 0x6c9) = 1;
    }
  }
  if (*(char *)(param_1 + 0x820) == '\0') {
    if (((*(long *)(param_1 + 0x710) != 0) &&
        ((*(byte *)(*(long *)(param_1 + 0x710) + 0x1e8) & 1) != 0)) &&
       ((*(long *)(param_1 + 0x750) != 0 &&
        ((*(byte *)(*(long *)(param_1 + 0x750) + 0x1e8) & 1) != 0)))) {
      FUN_00fb9e50(&local_c8,param_1 + 0x748,param_1 + 0x708);
      *(undefined8 *)(param_1 + 0x798) = local_b8;
      *(undefined8 *)(param_1 + 0x790) = uStack_c0;
      *(undefined8 *)(param_1 + 0x788) = local_c8;
      FUN_00fb9ce0(param_1 + 0x7a0,auStack_b0);
      FUN_00fb9ce0(param_1 + 0x7e0,auStack_70);
      FUN_00db239c(auStack_70);
      FUN_00db239c(auStack_b0);
      *(undefined1 *)(param_1 + 0x820) = 1;
      goto LAB_00fb3b88;
    }
    if (*(char *)(param_1 + 0x820) != '\0') goto LAB_00fb3b88;
  }
  else {
LAB_00fb3b88:
    if (*(char *)(param_1 + 0x821) == '\0') {
      FUN_00fbe968(param_1);
      *(undefined1 *)(param_1 + 0x821) = 1;
    }
  }
  if (*(char *)(param_1 + 0x978) == '\0') {
    if ((((*(long *)(param_1 + 0x868) != 0) &&
         ((*(byte *)(*(long *)(param_1 + 0x868) + 0x1e8) & 1) != 0)) &&
        (*(long *)(param_1 + 0x8a8) != 0)) &&
       ((*(byte *)(*(long *)(param_1 + 0x8a8) + 0x1e8) & 1) != 0)) {
      FUN_00fb9e50(&local_c8,param_1 + 0x8a0,param_1 + 0x860);
      *(undefined8 *)(param_1 + 0x8f0) = local_b8;
      *(undefined8 *)(param_1 + 0x8e8) = uStack_c0;
      *(undefined8 *)(param_1 + 0x8e0) = local_c8;
      FUN_00fb9ce0(param_1 + 0x8f8,auStack_b0);
      FUN_00fb9ce0(param_1 + 0x938,auStack_70);
      FUN_00db239c(auStack_70);
      FUN_00db239c(auStack_b0);
      *(undefined1 *)(param_1 + 0x978) = 1;
      goto LAB_00fb3b98;
    }
    if (*(char *)(param_1 + 0x978) != '\0') goto LAB_00fb3b98;
  }
  else {
LAB_00fb3b98:
    if (*(char *)(param_1 + 0x979) == '\0') {
      FUN_00fbe14c(param_1);
      *(undefined1 *)(param_1 + 0x979) = 1;
    }
  }
  if (*(char *)(param_1 + 0xd80) == '\0') {
    if (((*(long *)(param_1 + 0xc70) != 0) &&
        ((*(byte *)(*(long *)(param_1 + 0xc70) + 0x1e8) & 1) != 0)) &&
       ((*(long *)(param_1 + 0xcb0) != 0 &&
        ((*(byte *)(*(long *)(param_1 + 0xcb0) + 0x1e8) & 1) != 0)))) {
      FUN_00fb9e50(&local_c8,param_1 + 0xca8,param_1 + 0xc68);
      *(undefined8 *)(param_1 + 0xcf8) = local_b8;
      *(undefined8 *)(param_1 + 0xcf0) = uStack_c0;
      *(undefined8 *)(param_1 + 0xce8) = local_c8;
      FUN_00fb9ce0(param_1 + 0xd00,auStack_b0);
      FUN_00fb9ce0(param_1 + 0xd40,auStack_70);
      FUN_00db239c(auStack_70);
      FUN_00db239c(auStack_b0);
      *(undefined1 *)(param_1 + 0xd80) = 1;
      goto LAB_00fb3bac;
    }
    if (*(char *)(param_1 + 0xd80) != '\0') goto LAB_00fb3bac;
  }
  else {
LAB_00fb3bac:
    if (*(char *)(param_1 + 0xd81) == '\0') {
      FUN_00fb4f6c(param_1);
      *(undefined1 *)(param_1 + 0xd81) = 1;
    }
  }
  if (*(char *)(param_1 + 0xad0) == '\0') {
    if (((*(long *)(param_1 + 0x9c0) != 0) &&
        ((*(byte *)(*(long *)(param_1 + 0x9c0) + 0x1e8) & 1) != 0)) &&
       ((*(long *)(param_1 + 0xa00) != 0 &&
        ((*(byte *)(*(long *)(param_1 + 0xa00) + 0x1e8) & 1) != 0)))) {
      FUN_00fb9e50(&local_c8,param_1 + 0x9f8,param_1 + 0x9b8);
      *(undefined8 *)(param_1 + 0xa48) = local_b8;
      *(undefined8 *)(param_1 + 0xa40) = uStack_c0;
      *(undefined8 *)(param_1 + 0xa38) = local_c8;
      FUN_00fb9ce0(param_1 + 0xa50,auStack_b0);
      FUN_00fb9ce0(param_1 + 0xa90,auStack_70);
      FUN_00db239c(auStack_70);
      FUN_00db239c(auStack_b0);
      *(undefined1 *)(param_1 + 0xad0) = 1;
      goto LAB_00fb3bbc;
    }
    if (*(char *)(param_1 + 0xad0) != '\0') goto LAB_00fb3bbc;
  }
  else {
LAB_00fb3bbc:
    if (*(char *)(param_1 + 0xad1) == '\0') {
      FUN_00fbd3cc(param_1);
      *(undefined1 *)(param_1 + 0xad1) = 1;
    }
  }
  pcVar1 = (char *)(param_1 + 0x1048);
  if (*(char *)(param_1 + 0xc28) == '\0') {
    if ((((*(long *)(param_1 + 0xb18) != 0) &&
         ((*(byte *)(*(long *)(param_1 + 0xb18) + 0x1e8) & 1) != 0)) &&
        (*(long *)(param_1 + 0xb58) != 0)) &&
       ((*(byte *)(*(long *)(param_1 + 0xb58) + 0x1e8) & 1) != 0)) {
      FUN_00fb9e50(&local_c8,param_1 + 0xb50,param_1 + 0xb10);
      *(undefined8 *)(param_1 + 0xba0) = local_b8;
      *(undefined8 *)(param_1 + 0xb98) = uStack_c0;
      *(undefined8 *)(param_1 + 0xb90) = local_c8;
      FUN_00fb9ce0(param_1 + 0xba8,auStack_b0);
      FUN_00fb9ce0(param_1 + 0xbe8,auStack_70);
      FUN_00db239c(auStack_70);
      FUN_00db239c(auStack_b0);
      *(undefined1 *)(param_1 + 0xc28) = 1;
      goto LAB_00fb3bd0;
    }
    if (*(char *)(param_1 + 0xc28) != '\0') goto LAB_00fb3bd0;
  }
  else {
LAB_00fb3bd0:
    if (*(char *)(param_1 + 0xc29) == '\0') {
      FUN_00fbda74(param_1);
      *(undefined1 *)(param_1 + 0xc29) = 1;
    }
  }
  if (*(char *)(param_1 + 0xef0) == '\0') {
    if (((*(long *)(param_1 + 0xde0) == 0) ||
        ((*(byte *)(*(long *)(param_1 + 0xde0) + 0x1e8) & 1) == 0)) ||
       ((*(long *)(param_1 + 0xe20) == 0 ||
        ((*(byte *)(*(long *)(param_1 + 0xe20) + 0x1e8) & 1) == 0)))) {
      if (*(char *)(param_1 + 0xef0) == '\0') goto LAB_00fb3be8;
    }
    else {
      FUN_00fb9e50(&local_c8,param_1 + 0xe18,param_1 + 0xdd8);
      *(undefined8 *)(param_1 + 0xe68) = local_b8;
      *(undefined8 *)(param_1 + 0xe60) = uStack_c0;
      *(undefined8 *)(param_1 + 0xe58) = local_c8;
      FUN_00fb9ce0(param_1 + 0xe70,auStack_b0);
      FUN_00fb9ce0(param_1 + 0xeb0,auStack_70);
      FUN_00db239c(auStack_70);
      FUN_00db239c(auStack_b0);
      *(undefined1 *)(param_1 + 0xef0) = 1;
    }
  }
  if (*(char *)(param_1 + 0xef1) == '\0') {
    FUN_00fbfac8(param_1);
    *(undefined1 *)(param_1 + 0xef1) = 1;
  }
LAB_00fb3be8:
  if (*pcVar1 == '\0') {
    if (((*(long *)(param_1 + 0xf38) == 0) ||
        ((*(byte *)(*(long *)(param_1 + 0xf38) + 0x1e8) & 1) == 0)) ||
       ((*(long *)(param_1 + 0xf78) == 0 ||
        ((*(byte *)(*(long *)(param_1 + 0xf78) + 0x1e8) & 1) == 0)))) {
      if (*pcVar1 == '\0') {
        return;
      }
    }
    else {
      FUN_00fb9e50(&local_c8,param_1 + 0xf70,param_1 + 0xf30);
      *(undefined8 *)(param_1 + 0xfc0) = local_b8;
      *(undefined8 *)(param_1 + 0xfb8) = uStack_c0;
      *(undefined8 *)(param_1 + 0xfb0) = local_c8;
      FUN_00fb9ce0(param_1 + 0xfc8,auStack_b0);
      FUN_00fb9ce0(param_1 + 0x1008,auStack_70);
      FUN_00db239c(auStack_70);
      FUN_00db239c(auStack_b0);
      *pcVar1 = '\x01';
    }
  }
  if (*(char *)(param_1 + 0x1049) == '\0') {
    FUN_00fc285c(param_1);
    *(undefined1 *)(param_1 + 0x1049) = 1;
  }
  return;
}


