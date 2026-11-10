/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fb9b6c; name: FUN_00fb9b6c
 */


void FUN_00fb9b6c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [64];
  
  lVar1 = param_1 + 0x180;
  lVar2 = 0x12;
  do {
    FUN_00fb9e50(&local_d8,lVar1 + -0x98,lVar1 + -0xd8);
    *(undefined8 *)(lVar1 + -0x58) = local_d8;
    *(undefined8 *)(lVar1 + -0x50) = uStack_d0;
    *(undefined8 *)(lVar1 + -0x48) = local_c8;
    FUN_00fb9ce0(lVar1 + -0x40,auStack_c0);
    FUN_00fb9ce0(lVar1,auStack_80);
    FUN_00db239c(auStack_80);
    FUN_00db239c(auStack_c0);
    lVar2 = lVar2 + -1;
    lVar1 = lVar1 + 0x118;
  } while (lVar2 != 0);
  lVar1 = param_1 + 0x1598;
  lVar2 = 0x62;
  do {
    FUN_00fb9e50(&local_d8,lVar1 + -0x98,lVar1 + -0xd8);
    *(undefined8 *)(lVar1 + -0x58) = local_d8;
    *(undefined8 *)(lVar1 + -0x50) = uStack_d0;
    *(undefined8 *)(lVar1 + -0x48) = local_c8;
    FUN_00fb9ce0(lVar1 + -0x40,auStack_c0);
    FUN_00fb9ce0(lVar1,auStack_80);
    FUN_00db239c(auStack_80);
    FUN_00db239c(auStack_c0);
    lVar2 = lVar2 + -1;
    lVar1 = lVar1 + 0x118;
  } while (lVar2 != 0);
  param_1 = param_1 + 0x8130;
  lVar1 = 0x25;
  do {
    FUN_00fb9e50(&local_d8,param_1 + -0x98,param_1 + -0xd8);
    *(undefined8 *)(param_1 + -0x58) = local_d8;
    *(undefined8 *)(param_1 + -0x50) = uStack_d0;
    *(undefined8 *)(param_1 + -0x48) = local_c8;
    FUN_00fb9ce0(param_1 + -0x40,auStack_c0);
    FUN_00fb9ce0(param_1,auStack_80);
    FUN_00db239c(auStack_80);
    FUN_00db239c(auStack_c0);
    lVar1 = lVar1 + -1;
    param_1 = param_1 + 0x118;
  } while (lVar1 != 0);
  return;
}


