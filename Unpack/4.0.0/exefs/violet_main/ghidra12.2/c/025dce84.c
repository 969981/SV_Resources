/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025dce84; name: FUN_025dce84
 */


void FUN_025dce84(undefined1 *param_1,byte *param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((1 < *param_2) ||
     (puVar2 = *(undefined **)(param_2 + 8), *(undefined **)(param_2 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047d3b98 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d3b98);
      puVar2 = PTR_DAT_047d3ba0;
      if (iVar1 == 0) goto LAB_025dceac;
      *(undefined8 *)PTR_DAT_047d3ba0 = 0;
      __cxa_guard_release(PTR_DAT_047d3b98);
    }
    else {
      puVar2 = PTR_DAT_047d3ba0;
    }
  }
LAB_025dceac:
  FUN_025dd654(&local_40,puVar2,param_3);
  *param_1 = 1;
  *(undefined8 *)(param_1 + 0x18) = local_30;
  *(undefined8 *)(param_1 + 0x20) = uStack_28;
  *(undefined8 *)(param_1 + 8) = local_40;
  *(undefined8 *)(param_1 + 0x10) = uStack_38;
  return;
}


