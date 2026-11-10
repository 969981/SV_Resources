/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324c790; name: FUN_0324c790
 */


void FUN_0324c790(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = (long)(PTR_DAT_047e6080 + 0x10);
  puVar1 = PTR_DAT_047d1a08;
  if ((int)param_1[4] != 0) {
    lVar3 = param_1[3];
    lVar4 = (long)(int)param_1[4] << 4;
    do {
      uVar2 = *(ulong *)(lVar3 + -0x10 + lVar4);
      if ((uVar2 & 1) != 0) {
        (**(code **)(puVar1 + 8))(0,uVar2 - 1,0);
      }
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[3],(ulong)*(uint *)((long)param_1 + 0x24) << 4);
  }
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0324c858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar1 + 8))(0,param_1,0);
  return;
}


