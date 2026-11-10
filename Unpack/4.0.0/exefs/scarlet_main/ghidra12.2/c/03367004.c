/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03367004; name: FUN_03367004
 */


void FUN_03367004(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  
  puVar3 = (ulong *)*param_1;
  if (puVar3 == (ulong *)0x0) {
    return;
  }
  if ((int)puVar3[2] != 0) {
    uVar2 = puVar3[1];
    lVar4 = (long)(int)puVar3[2] << 3;
    do {
      FUN_03367004((uVar2 - 8) + lVar4);
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  *(undefined4 *)(puVar3 + 2) = 0;
  if ((-1 < (int)*(uint *)((long)puVar3 + 0x14)) && (puVar3[1] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,puVar3[1],(ulong)*(uint *)((long)puVar3 + 0x14) << 3);
  }
  puVar3[1] = 0;
  *(undefined4 *)((long)puVar3 + 0x14) = 0x80000000;
  puVar1 = PTR_DAT_047d1a08;
  if ((*puVar3 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,*puVar3 - 1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x033670b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar1 + 8))(0,puVar3,0);
  return;
}


