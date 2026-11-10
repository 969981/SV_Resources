/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0049f160; name: FUN_0049f160
 */


void FUN_0049f160(long *param_1,long *param_2)

{
  undefined *puVar1;
  long extraout_x1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_047cba80;
  if (param_1 == param_2) {
    return;
  }
  pbVar3 = (byte *)param_1[2];
  if (pbVar3 == PTR_DAT_047cba80) {
LAB_0049f198:
    pbVar3 = (byte *)param_1[3];
  }
  else {
    if ((*pbVar3 & 1) == 0) {
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      goto LAB_0049f198;
    }
    **(undefined1 **)(pbVar3 + 0x10) = 0;
    pbVar3[8] = 0;
    pbVar3[9] = 0;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0;
    pbVar3[0xc] = 0;
    pbVar3[0xd] = 0;
    pbVar3[0xe] = 0;
    pbVar3[0xf] = 0;
    pbVar3 = (byte *)param_1[3];
  }
  if (pbVar3 != puVar1) {
    if ((*pbVar3 & 1) != 0) {
      **(undefined1 **)(pbVar3 + 0x10) = 0;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
      uVar2 = param_1[1];
      goto joined_r0x0049f1f4;
    }
    pbVar3[0] = 0;
    pbVar3[1] = 0;
  }
  uVar2 = param_1[1];
joined_r0x0049f1f4:
  if (((uVar2 & 1) != 0) &&
     (*(long *)((uVar2 & 0xfffffffffffffffe) + 8) != *(long *)((uVar2 & 0xfffffffffffffffe) + 0x10))
     ) {
    FUN_00514600();
  }
  if (*(int *)PTR_DAT_047cd6f8 != 0) {
    FUN_0052b230(PTR_DAT_047cd6f8);
  }
  puVar1 = PTR_DAT_047cd700;
  FUN_004f9370(PTR_DAT_047cd700,0);
  lVar4 = *(long *)(*(long *)(puVar1 + 0x58) + 8);
  (**(code **)(*param_2 + 0x98))(param_2);
  if (lVar4 == extraout_x1) {
    FUN_0049f02c(param_1,param_2);
    return;
  }
  FUN_00505148(param_2,param_1);
  return;
}


