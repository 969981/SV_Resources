/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03240a78; name: FUN_03240a78
 */


void FUN_03240a78(long *param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = FUN_0323f858(param_2,param_1);
  (**(code **)(*param_1 + 0x60))(param_1,uVar1);
  if (((int)param_2[4] != 0) &&
     ((**(code **)(*param_1 + 0x20))(param_1,param_2[3] + 0x10,(int)param_2[4],0x18),
     0 < (int)param_2[4])) {
    lVar2 = 0;
    lVar3 = 0x10;
    do {
      *(undefined8 *)(param_2[3] + lVar3) = 0;
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x18;
    } while (lVar2 < (int)param_2[4]);
  }
                    /* WARNING: Could not recover jumptable at 0x03240b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}


