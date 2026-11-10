/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fff03c; name: FUN_02fff03c
 */


void FUN_02fff03c(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = (long)&PTR_LAB_04612c18;
  param_1[4] = (long)&PTR_LAB_04612c58;
  puVar2 = PTR_PTR_047d1a50;
  if ((int)param_1[7] != 0) {
    lVar3 = param_1[6];
    lVar4 = (long)(int)param_1[7] << 4;
    do {
      lVar1 = lVar3 + lVar4;
      *(undefined4 *)(lVar1 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar1 + -4)) && (*(long *)(lVar1 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))
                  (puVar2,*(long *)(lVar1 + -0x10),(ulong)*(uint *)(lVar1 + -4) * 0x30);
      }
      lVar4 = lVar4 + -0x10;
      *(undefined8 *)(lVar1 + -0x10) = 0;
      *(undefined4 *)(lVar1 + -4) = 0x80000000;
    } while (lVar4 != 0);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x20))
              (puVar2,param_1[6],(ulong)*(uint *)((long)param_1 + 0x3c) << 4);
  }
  param_1[6] = 0;
  puVar2 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  *param_1 = (long)(puVar2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x02fff130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_047d1a08 + 8))(0,param_1,0);
  return;
}


