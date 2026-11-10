/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0351b514; name: FUN_0351b514
 */


void FUN_0351b514(long *param_1,int *param_2)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x28))();
  iVar1 = *param_2;
  if (iVar1 == 2) {
    FUN_03517ec0(param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,
                 *(undefined1 *)((long)param_2 + 0x22),param_2[4]);
  }
  else if (iVar1 == 1) {
    FUN_03517d78(param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,param_2[4]);
  }
  else if (iVar1 == 0) {
    FUN_03517be0(param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,param_2[4]);
  }
  FUN_0346adac(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0351b5b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1);
  return;
}


