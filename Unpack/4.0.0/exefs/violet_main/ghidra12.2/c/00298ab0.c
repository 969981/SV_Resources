/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00298ab0; name: FUN_00298ab0
 */


void FUN_00298ab0(undefined8 param_1,char *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  size_t sVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_38;
  
  puVar1 = (undefined8 *)FUN_0038ad50(PTR_PTR_047cc658);
  if ((*(int *)(puVar1 + 1) != 1) || (puVar4 = (undefined8 *)*puVar1, puVar4 == (undefined8 *)0x0))
  {
    puVar4 = (undefined8 *)FUN_0038ad50(PTR_DAT_047cc660,param_3);
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = puVar4;
  }
  sVar2 = strlen(param_2);
  if (0x7f < sVar2) {
    sVar2 = 0x80;
  }
  *puVar4 = param_2;
  puVar4[1] = sVar2;
  uVar3 = FUN_0038ace0(puVar1,PTR_PTR_047cc658,param_3,&local_38);
  FUN_003676d0(param_1,uVar3,local_38);
  return;
}


