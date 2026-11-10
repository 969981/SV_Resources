/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0052d65c; name: thunk_FUN_0052d660
 */


/* WARNING: Removing unreachable block (ram,0x0052d6e0) */

undefined8 thunk_FUN_0052d660(long *param_1,byte *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbStack_70;
  undefined8 uStack_68;
  undefined8 uStack_40;
  undefined2 uStack_38;
  byte bStack_36;
  
  if ((*param_2 & 1) == 0) {
    uVar4 = (ulong)(*param_2 >> 1);
  }
  else {
    uVar4 = *(ulong *)(param_2 + 8);
  }
  uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
  if (uVar2 >> 0x1f != 0) {
    return 0;
  }
  uVar1 = uVar2 + uVar4;
  if ((*param_2 & 1) == 0) {
    uVar3 = (ulong)(*param_2 >> 1);
    if (uVar3 < uVar1) {
LAB_0052d6f0:
      FUN_002ce498(param_2,uVar1 - uVar3,0);
      if ((*param_2 & 1) != 0) goto LAB_0052d724;
    }
    else {
      param_2[uVar1 + 1] = 0;
      *param_2 = (byte)((int)uVar1 << 1);
    }
LAB_0052d708:
    param_2 = param_2 + 1;
  }
  else {
    uVar3 = *(ulong *)(param_2 + 8);
    if (uVar3 < uVar1) goto LAB_0052d6f0;
    *(undefined1 *)(*(long *)(param_2 + 0x10) + uVar1) = 0;
    *(ulong *)(param_2 + 8) = uVar1;
    if ((*param_2 & 1) == 0) goto LAB_0052d708;
LAB_0052d724:
    param_2 = *(byte **)(param_2 + 0x10);
  }
  uStack_40 = 0;
  uStack_38 = 0;
  bStack_36 = *PTR_DAT_047cdc48 & 1;
  pbStack_70 = param_2 + uVar4 + uVar2;
  uStack_68 = 0;
  (**(code **)(*param_1 + 0x60))(param_1,param_2 + uVar4,&pbStack_70);
  return 1;
}


