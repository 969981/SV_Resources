/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dbbfd0; name: FUN_01dbbfd0
 */


void FUN_01dbbfd0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *(long *)(param_1 + 0x90);
  if (lVar2 != 0) {
    plVar3 = *(long **)(param_1 + 8);
    uVar1 = FUN_00c4e564(plVar3);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar2,0x97e00,8);
    }
    else {
      FUN_00c48fe8(plVar3,lVar2,0x97e00,8);
    }
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  lVar2 = *(long *)(param_1 + 0xb0);
  if (lVar2 != 0) {
    plVar3 = *(long **)(param_1 + 8);
    uVar1 = FUN_00c4e564(plVar3);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar2,0x97e00,8);
    }
    else {
      FUN_00c48fe8(plVar3,lVar2,0x97e00,8);
    }
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  lVar2 = *(long *)(param_1 + 0xd0);
  if (lVar2 != 0) {
    plVar3 = *(long **)(param_1 + 8);
    uVar1 = FUN_00c4e564(plVar3);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar2,0x97e00,8);
    }
    else {
      FUN_00c48fe8(plVar3,lVar2,0x97e00,8);
    }
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  return;
}


