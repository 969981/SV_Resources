/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025025fc; name: FUN_025025fc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_025025fc(undefined8 param_1,byte *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  undefined *puVar8;
  
  cVar6 = DAT_0484f1d8;
  if ((1 < *param_2) ||
     (puVar8 = *(undefined **)(param_2 + 8), *(undefined **)(param_2 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047d4538 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(PTR_DAT_047d4538);
      puVar8 = PTR_DAT_047d4540;
      uVar5 = _UNK_03cabe58;
      uVar4 = _DAT_03cabe50;
      uVar3 = _UNK_03caa988;
      uVar2 = _DAT_03caa980;
      if (iVar7 != 0) {
        *(undefined8 *)(PTR_DAT_047d4540 + 0x20) = 0;
        *(undefined8 *)(puVar8 + 0x28) = 0;
        *(undefined8 *)(puVar8 + 8) = uVar3;
        *(undefined8 *)puVar8 = uVar2;
        *(undefined8 *)(puVar8 + 0x18) = uVar5;
        *(undefined8 *)(puVar8 + 0x10) = uVar4;
        __cxa_guard_release(PTR_DAT_047d4538);
      }
    }
    else {
      puVar8 = PTR_DAT_047d4540;
    }
  }
  puVar1 = PTR_LAB_047df1f0;
  if (cVar6 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_02503da8(param_1,puVar1,0,puVar8);
  return;
}


