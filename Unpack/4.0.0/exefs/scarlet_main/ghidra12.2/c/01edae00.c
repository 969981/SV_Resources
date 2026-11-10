/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01edae00; name: FUN_01edae00
 */


void FUN_01edae00(undefined1 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  byte bVar4;
  size_t __n;
  undefined4 unaff_w26;
  char local_2d8 [8];
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined4 local_2b8;
  
  FUN_01ecce00(local_2d8);
  uVar3 = *(undefined1 *)(param_2 + 0x11);
  uVar2 = *(undefined4 *)(param_2 + 8);
  bVar4 = *(byte *)(param_2 + 0x15);
  uVar1 = 0;
  if (local_2d8[0] != '\0') {
    uVar1 = local_2d0;
  }
  switch(uVar3) {
  case 0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("false","ToSaveData",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/network/net_contents/mystery_gift/mystery_gift_model.cpp"
               ,0x24a);
  case 1:
    unaff_w26 = *(undefined4 *)(param_2 + 0x18);
    __n = 0x260;
    goto LAB_01edaeb0;
  case 2:
    unaff_w26 = *(undefined4 *)(param_2 + 0x18);
    local_2c8 = *(undefined8 *)(param_2 + 0x1c);
    uStack_2c0 = *(undefined8 *)(param_2 + 0x24);
    local_2b8 = *(undefined4 *)(param_2 + 0x2c);
    break;
  case 3:
  case 5:
    unaff_w26 = *(undefined4 *)(param_2 + 0x18);
    break;
  case 4:
    unaff_w26 = *(undefined4 *)(param_2 + 0x18);
    __n = 0x5c;
LAB_01edaeb0:
    memcpy(&local_2c8,(void *)(param_2 + 0x1c),__n);
  }
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(ushort *)(param_1 + 0x14) = (ushort)bVar4;
  param_1[0x16] = uVar3;
  *(undefined4 *)(param_1 + 0x18) = unaff_w26;
  memcpy(param_1 + 0x1c,&local_2c8,0x264);
  *param_1 = 1;
  return;
}


