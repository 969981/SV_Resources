/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d8d198; name: FUN_00d8d198
 */


void FUN_00d8d198(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  (**(code **)PTR_DAT_047d2858)
            ((float)(double)param_2[4],(float)(double)param_2[5],*(undefined8 *)(param_1 + 0xb0));
  puVar3 = PTR_DAT_047d2860;
  (**(code **)PTR_DAT_047d2860)(*(undefined8 *)(param_1 + 0xb0),0,1,param_2 + 2);
  puVar4 = PTR_DAT_047d2868;
  (**(code **)PTR_DAT_047d2868)(*(undefined8 *)(param_1 + 0xb0),0,1,param_2 + 6);
  if ((int)param_2[1] < 2) {
    return;
  }
  uVar2 = (int)param_2[1] - 1;
  lVar1 = *param_2 + (ulong)uVar2 * 0x10;
  (**(code **)puVar3)(*(undefined8 *)(param_1 + 0xb0),1,uVar2);
  (**(code **)PTR_DAT_047d2870)(*(undefined8 *)(param_1 + 0xb0),1,uVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00d8d288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)puVar4)(*(undefined8 *)(param_1 + 0xb0),1,uVar2,lVar1 + (ulong)uVar2 * 8);
  return;
}


