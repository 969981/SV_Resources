/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033d36e4; name: FUN_033d36e4
 */


void FUN_033d36e4(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar2 = *(uint *)(param_1 + 2);
    if (uVar2 != 0) {
      uVar3 = 0;
      while( true ) {
        if (*(long *)(lVar1 + uVar3 * 8) != 0) {
          (**(code **)(*param_2 + 0x18))(param_2);
          *(undefined8 *)(*param_1 + uVar3 * 8) = 0;
          uVar2 = *(uint *)(param_1 + 2);
        }
        uVar3 = uVar3 + 1;
        if (uVar2 <= uVar3) break;
        lVar1 = *param_1;
      }
      lVar1 = *param_1;
    }
    (**(code **)(*param_2 + 0x18))(param_2,lVar1);
  }
  lVar1 = param_1[3];
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  if (lVar1 != 0) {
    uVar2 = *(uint *)(param_1 + 5);
    if (uVar2 != 0) {
      uVar3 = 0;
      while( true ) {
        if (*(long *)(lVar1 + uVar3 * 8) != 0) {
          (**(code **)(*param_2 + 0x18))(param_2);
          *(undefined8 *)(param_1[3] + uVar3 * 8) = 0;
          uVar2 = *(uint *)(param_1 + 5);
        }
        uVar3 = uVar3 + 1;
        if (uVar2 <= uVar3) break;
        lVar1 = param_1[3];
      }
      lVar1 = param_1[3];
    }
    (**(code **)(*param_2 + 0x18))(param_2,lVar1);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (param_1[6] != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
  }
  if (param_1[8] != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    param_1[8] = 0;
    *(undefined4 *)(param_1 + 9) = 0;
  }
  return;
}


