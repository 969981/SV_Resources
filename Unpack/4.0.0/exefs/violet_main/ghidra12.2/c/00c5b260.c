/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c5b260; name: FUN_00c5b260
 */


void FUN_00c5b260(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  puVar1 = PTR_DAT_047d27e8;
  uVar4 = (ulong)*(byte *)((long)param_2 + 0x25);
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  if (uVar4 != 0) {
    lVar3 = *param_2;
    do {
      (**(code **)puVar1)(uVar2,lVar3);
      uVar2 = *(undefined8 *)(param_1 + 0xb0);
      lVar3 = lVar3 + 8;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  (**(code **)PTR_DAT_047d27f0)(uVar2,(long)param_2 + 0xc);
  (**(code **)PTR_DAT_047d27f8)(*(undefined8 *)(param_1 + 0xb0),param_2 + 1);
                    /* WARNING: Could not recover jumptable at 0x00c5b300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_047d2800)(*(undefined8 *)(param_1 + 0xb0),param_2 + 2);
  return;
}


