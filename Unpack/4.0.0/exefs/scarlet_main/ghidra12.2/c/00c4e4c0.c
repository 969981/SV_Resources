/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c4e4c0; name: FUN_00c4e4c0
 */


void FUN_00c4e4c0(char *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [24];
  
  if (*param_1 == '\x01') {
    lVar4 = *(long *)(param_1 + 8);
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    if (lVar4 != 0) {
      FUN_00c4e5a0(auStack_48,0);
      plVar1 = *(long **)(param_1 + 0x10);
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      uVar3 = FUN_00c4e564(plVar1);
      if ((uVar3 & 1) == 0) {
        (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,uVar2,uVar5);
      }
      else {
        FUN_00c48fe8(plVar1,lVar4,uVar2,uVar5);
      }
      FUN_00c4e70c(auStack_48);
    }
  }
  return;
}


