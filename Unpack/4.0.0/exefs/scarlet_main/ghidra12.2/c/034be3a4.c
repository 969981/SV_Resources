/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034be3a4; name: FUN_034be3a4
 */


void FUN_034be3a4(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  float fVar7;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x40) = param_2;
  uVar5 = (uint)param_2;
  if (DAT_048b02a8 != 0) {
    uVar1 = 0;
    if (DAT_048b02a8 != 0) {
      uVar1 = uVar5 / DAT_048b02a8;
    }
    uVar6 = (ulong)(uVar5 - uVar1 * DAT_048b02a8);
    plVar3 = *(long **)(DAT_048b02a0 + uVar6 * 8);
    if (plVar3 != (long *)0x0) {
      plVar4 = plVar3;
      do {
        if (*(uint *)(plVar4 + 1) == uVar5) {
          plVar4 = plVar4 + 2;
          goto LAB_034be4e0;
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
    fVar7 = (float)NEON_ucvtf(DAT_048b02b0);
    if (fVar7 / (float)DAT_048b02a8 <= 0.9) goto joined_r0x034be468;
  }
  FUN_034bf580(&DAT_048b0298);
  if (DAT_048b02a8 == 0) {
    return;
  }
  uVar1 = 0;
  if (DAT_048b02a8 != 0) {
    uVar1 = uVar5 / DAT_048b02a8;
  }
  uVar6 = (ulong)(uVar5 - uVar1 * DAT_048b02a8);
  plVar3 = *(long **)(DAT_048b02a0 + uVar6 * 8);
joined_r0x034be468:
  do {
    if (plVar3 == (long *)0x0) {
      puVar2 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x18);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *(undefined8 *)(DAT_048b02a0 + uVar6 * 8);
        *(uint *)(puVar2 + 1) = uVar5;
        plVar4 = puVar2 + 2;
        *plVar4 = 0;
        *(undefined8 **)(DAT_048b02a0 + uVar6 * 8) = puVar2;
        DAT_048b02b0 = DAT_048b02b0 + 1;
LAB_034be4e0:
        if (*plVar4 == 0) {
          *plVar4 = param_1;
          *(undefined8 *)(param_1 + 8) = 0;
        }
        else {
          *(long *)(param_1 + 8) = *plVar4;
          *plVar4 = param_1;
        }
      }
      return;
    }
    if (*(uint *)(plVar3 + 1) == uVar5) {
      plVar4 = plVar3 + 2;
      goto LAB_034be4e0;
    }
    plVar3 = (long *)*plVar3;
  } while( true );
}


