/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e8a66c; name: FUN_02e8a66c
 */


void FUN_02e8a66c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 local_38;
  
  puVar1 = PTR_DAT_047d1a08;
  if (*(char *)(param_2 + 0x100) == '\x02') {
    local_38 = 0x50;
    uVar2 = (**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
    pcVar3 = *(code **)(puVar1 + 0x10);
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar2,"hknpCompoundShapeInternalsSimdTreeKeyMask");
    }
    FUN_02eaf750(uVar2,param_2);
  }
  else {
    local_38 = 0x48;
    uVar2 = (**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
    pcVar3 = *(code **)(puVar1 + 0x10);
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar2,"hknpCompoundShapeInternalsCdDynamicTreeKeyMask");
    }
    FUN_02eb03e8(uVar2,param_2);
  }
  *param_1 = uVar2;
  return;
}


