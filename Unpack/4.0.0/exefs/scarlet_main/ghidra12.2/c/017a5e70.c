/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017a5e70; name: FUN_017a5e70
 */


void FUN_017a5e70(undefined1 *param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,byte *param_6)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 local_60 [16];
  undefined8 uStack_50;
  undefined8 local_40;
  undefined8 uStack_30;
  
  if ((1 < *param_6) ||
     (puVar2 = *(undefined8 **)(param_6 + 8), *(undefined8 **)(param_6 + 8) == (undefined8 *)0x0)) {
    if ((*PTR_DAT_047d3c18 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d3c18);
      puVar2 = (undefined8 *)PTR_DAT_047d3c20;
      if (iVar1 != 0) {
        *(undefined8 *)PTR_DAT_047d3c20 = 0;
        *(undefined8 *)((long)puVar2 + 8) = 0;
        __cxa_guard_release(PTR_DAT_047d3c18);
      }
    }
    else {
      puVar2 = (undefined8 *)PTR_DAT_047d3c20;
    }
  }
  local_60 = FUN_017a5f1c(*puVar2);
  *param_1 = 1;
  uStack_50 = param_3;
  local_40 = param_4;
  uStack_30 = param_5;
  FUN_00d319d0(param_1 + 8,local_60);
  return;
}


