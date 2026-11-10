/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02169b78; name: FUN_02169b78
 */


void FUN_02169b78(long *param_1,long param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if ((ulong)(long)param_3 < (ulong)(*(long *)(param_2 + 0x2a8) - *(long *)(param_2 + 0x2a0) >> 3))
  {
    plVar1 = (long *)FUN_02169c28(*(undefined8 *)(*(long *)(param_2 + 0x2a0) + (long)param_3 * 8));
    plVar2 = (long *)*plVar1;
    *param_1 = (long)plVar2;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))();
    }
    lVar3 = plVar1[2];
    param_1[1] = plVar1[1];
    param_1[2] = lVar3;
    plVar2 = (long *)plVar1[4];
    param_1[3] = plVar1[3];
    param_1[4] = (long)plVar2;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))();
    }
    *(int *)(param_1 + 5) = (int)plVar1[5];
  }
  else {
    *param_1 = 0;
    param_1[1] = (long)&DAT_cbf29ce484222645;
    param_1[4] = 0;
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    param_1[2] = (long)&DAT_03c886bc;
    param_1[3] = 0;
  }
  return;
}


