/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00882e60; name: FUN_00882e60
 */


undefined8 FUN_00882e60(undefined4 *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0x80260201;
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    *param_1 = param_2[2];
    param_1[1] = param_2[4];
    param_1[2] = param_2[5];
    uVar4 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 3) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 10);
    uVar2 = *(undefined8 *)(param_2 + 0xc);
    uVar1 = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_1 + 0xd) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0xb) = uVar1;
    *(undefined8 *)(param_1 + 9) = uVar2;
    *(undefined8 *)(param_1 + 7) = uVar4;
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0x12);
    param_1[0x10] = *param_2;
    param_1[0x12] = 6;
    iVar3 = strcmp("Default",*(char **)PTR_PTR_047d1e78);
    if (iVar3 == 0) {
      uVar4 = FUN_00882fb0(param_1,&DAT_03d0f2fc,0xffff,param_3);
      if (-1 < (int)uVar4) {
        param_1[0x11] = 3;
        return uVar4;
      }
    }
    else {
      uVar4 = 0x80800006;
    }
  }
  return uVar4;
}


