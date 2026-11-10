/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02286744; name: FUN_02286744
 */


void FUN_02286744(undefined8 *param_1,undefined8 param_2,byte *param_3,byte *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 local_8;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((((1 < *param_3) ||
       (puVar4 = *(undefined **)(param_3 + 8), *(undefined **)(param_3 + 8) == (undefined *)0x0)) &&
      (puVar4 = PTR_DAT_047d3ba0, (*PTR_DAT_047d3b98 & 1) == 0)) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3b98), puVar4 = PTR_DAT_047d3ba0, iVar3 != 0)) {
    *(undefined8 *)PTR_DAT_047d3ba0 = 0;
    __cxa_guard_release(PTR_DAT_047d3b98);
  }
  if (((1 < *param_4) ||
      (puVar5 = *(undefined8 **)(param_4 + 8), *(undefined8 **)(param_4 + 8) == (undefined8 *)0x0))
     && ((puVar5 = (undefined8 *)PTR_DAT_047d3ba0, (*PTR_DAT_047d3b98 & 1) == 0 &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3b98), puVar5 = (undefined8 *)PTR_DAT_047d3ba0,
         iVar3 != 0)))) {
    *(undefined8 *)PTR_DAT_047d3ba0 = 0;
    __cxa_guard_release(PTR_DAT_047d3b98);
  }
  local_8 = *puVar5;
  FUN_0228a188(param_2,uVar1,uVar2,puVar4,&local_8);
  return;
}


