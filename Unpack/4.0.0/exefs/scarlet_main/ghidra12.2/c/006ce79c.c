/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006ce79c; name: FUN_006ce79c
 */


void FUN_006ce79c(undefined4 *param_1,undefined4 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  uVar4 = *(undefined8 *)(param_2 + 4);
  uVar3 = *(undefined8 *)(param_2 + 2);
  uVar5 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 6) = uVar5;
  *(undefined8 *)(param_1 + 4) = uVar4;
  *(undefined8 *)(param_1 + 2) = uVar3;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  if (*(char *)(param_2 + 10) != '\0') {
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    uVar3 = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0xe) = uVar3;
    lVar2 = *(long *)(param_2 + 0x12);
    plVar1 = (long *)(param_1 + 0xe);
    *(long *)(param_1 + 0x12) = lVar2;
    if (lVar2 == 0) {
      *(long **)(param_1 + 0xc) = plVar1;
    }
    else {
      *(long **)(*plVar1 + 0x10) = plVar1;
      *(undefined4 **)(param_2 + 0xc) = param_2 + 0xe;
      *(undefined8 *)(param_2 + 0xe) = 0;
      *(undefined8 *)(param_2 + 0x12) = 0;
    }
    *(undefined1 *)(param_1 + 10) = 1;
  }
  *(undefined **)(param_1 + 0x14) = PTR_DAT_047cfbf0 + 0x10;
                    /* try { // try from 006ce834 to 006ce83b has its CatchHandler @ 006ce864 */
  FUN_006cbc88(param_1 + 0x16,param_2 + 0x16);
                    /* try { // try from 006ce844 to 006ce847 has its CatchHandler @ 006ce854 */
  FUN_006ce8bc(param_1 + 0x8e,param_2 + 0x8e);
  return;
}


