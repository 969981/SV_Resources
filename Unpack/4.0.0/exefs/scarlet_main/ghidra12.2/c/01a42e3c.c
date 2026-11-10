/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a42e3c; name: FUN_01a42e3c
 */


void FUN_01a42e3c(undefined1 *param_1,undefined8 *param_2,undefined8 param_3,byte *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  if ((((1 < *param_4) ||
       (puVar4 = *(undefined8 **)(param_4 + 8), *(undefined8 **)(param_4 + 8) == (undefined8 *)0x0))
      && (puVar4 = (undefined8 *)PTR_DAT_047d3ba0, (*PTR_DAT_047d3b98 & 1) == 0)) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3b98), puVar4 = (undefined8 *)PTR_DAT_047d3ba0,
     iVar3 != 0)) {
    *(undefined8 *)PTR_DAT_047d3ba0 = 0;
    __cxa_guard_release(PTR_DAT_047d3b98);
  }
  local_58 = *puVar4;
  FUN_01a42f1c(&local_50,param_3,uVar1,uVar2,&local_58);
  *param_1 = 1;
  local_38 = local_50;
  uStack_30 = uStack_48;
  local_28 = local_40;
  FUN_00d5b7a4(param_1 + 8,&local_38);
  return;
}


