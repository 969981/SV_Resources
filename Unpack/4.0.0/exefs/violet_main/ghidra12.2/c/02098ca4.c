/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02098ca4; name: FUN_02098ca4
 */


void FUN_02098ca4(long param_1,int param_2,uint param_3)

{
  long lVar1;
  
  if ((param_3 & 1) == 0) {
    lVar1 = (long)param_2;
    goto LAB_02098cac;
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0xbc) = 0;
LAB_02098d54:
    *(undefined4 *)(param_1 + 0xc0) = 0;
LAB_02098d58:
    *(undefined4 *)(param_1 + 0xc4) = 0;
LAB_02098d5c:
    *(undefined4 *)(param_1 + 200) = 0;
LAB_02098d60:
    *(undefined4 *)(param_1 + 0xcc) = 0;
LAB_02098d64:
    *(undefined4 *)(param_1 + 0xd0) = 0;
LAB_02098d68:
    *(undefined4 *)(param_1 + 0xd4) = 0;
LAB_02098d6c:
    *(undefined4 *)(param_1 + 0xd8) = 0;
LAB_02098d70:
    *(undefined4 *)(param_1 + 0xdc) = 0;
LAB_02098d74:
    *(undefined4 *)(param_1 + 0xe0) = 0;
LAB_02098d78:
    *(undefined4 *)(param_1 + 0xe4) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xb8) = 0;
    if (param_2 == 1) goto LAB_02098d54;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    if (param_2 == 2) goto LAB_02098d58;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    if (param_2 == 3) goto LAB_02098d5c;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    if (param_2 == 4) goto LAB_02098d60;
    *(undefined4 *)(param_1 + 200) = 0;
    if (param_2 == 5) goto LAB_02098d64;
    *(undefined4 *)(param_1 + 0xcc) = 0;
    if (param_2 == 6) goto LAB_02098d68;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    if (param_2 == 7) goto LAB_02098d6c;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    if (param_2 == 8) goto LAB_02098d70;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    if (param_2 == 9) goto LAB_02098d74;
    *(undefined4 *)(param_1 + 0xdc) = 0;
    if (param_2 == 10) goto LAB_02098d78;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    if ((param_2 != 0xb) && (*(undefined4 *)(param_1 + 0xe4) = 0, param_2 == 0xc)) {
      return;
    }
  }
  lVar1 = 0xc;
LAB_02098cac:
  *(undefined4 *)(param_1 + lVar1 * 4 + 0xb8) = 0;
  return;
}


