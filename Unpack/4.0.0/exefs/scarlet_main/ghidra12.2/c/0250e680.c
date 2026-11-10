/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0250e680; name: FUN_0250e680
 */


void FUN_0250e680(undefined1 *param_1,double param_2,undefined8 *param_3,undefined8 param_4,
                 byte *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  float local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30 [16];
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  if ((((1 < *param_5) ||
       (puVar4 = *(undefined8 **)(param_5 + 8), *(undefined8 **)(param_5 + 8) == (undefined8 *)0x0))
      && (puVar4 = (undefined8 *)PTR_DAT_047d3c20, (*PTR_DAT_047d3c18 & 1) == 0)) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3c18), puVar4 = (undefined8 *)PTR_DAT_047d3c20,
     iVar3 != 0)) {
    *(undefined8 *)PTR_DAT_047d3c20 = 0;
    *(undefined8 *)((long)puVar4 + 8) = 0;
    __cxa_guard_release(PTR_DAT_047d3c18);
  }
  uStack_38 = puVar4[1];
  local_40 = *puVar4;
  local_44 = (float)param_2;
  local_30 = FUN_02517a04(param_4,uVar1,uVar2,&local_40,&local_44);
  *param_1 = 1;
  FUN_00d200a4(param_1 + 8,local_30);
  return;
}


