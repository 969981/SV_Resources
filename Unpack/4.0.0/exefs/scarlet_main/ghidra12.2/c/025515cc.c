/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025515cc; name: FUN_025515cc
 */


void FUN_025515cc(undefined8 param_1,byte *param_2,byte param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 local_30;
  undefined8 uStack_28;
  byte local_4 [4];
  
  cVar2 = DAT_04850ab8;
  if ((((1 < *param_2) ||
       (puVar4 = *(undefined8 **)(param_2 + 8), *(undefined8 **)(param_2 + 8) == (undefined8 *)0x0))
      && (puVar4 = (undefined8 *)PTR_DAT_047d3c20, (*PTR_DAT_047d3c18 & 1) == 0)) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3c18), puVar4 = (undefined8 *)PTR_DAT_047d3c20,
     iVar3 != 0)) {
    *(undefined8 *)PTR_DAT_047d3c20 = 0;
    *(undefined8 *)((long)puVar4 + 8) = 0;
    __cxa_guard_release(PTR_DAT_047d3c18);
  }
  uStack_28 = puVar4[1];
  local_30 = *puVar4;
  puVar1 = &LAB_02557c0c;
  if (cVar2 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_4[0] = param_3 & 1;
  FUN_02557df8(param_1,puVar1,0,&local_30,local_4);
  return;
}


