/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0182b860; name: FUN_0182b860
 */


undefined8 FUN_0182b860(undefined8 param_1)

{
  undefined8 *puVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  float fVar5;
  
  if (((DAT_0482fed8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0482fed8), iVar2 != 0)) {
    DAT_04830d18 = 1;
    __cxa_guard_release(&DAT_0482fed8);
  }
  pcVar3 = (char *)FUN_0182b940(param_1,1);
  uVar4 = 0;
  fVar5 = 0.0;
  if (((*pcVar3 == '\x01') || (*pcVar3 == '\0')) && (*(long *)(pcVar3 + 8) != 0)) {
    puVar1 = (undefined8 *)(*(long *)(pcVar3 + 8) - ((ulong)~(uint)DAT_04830d18 & 1));
    fVar5 = (float)puVar1[1];
    uVar4 = *puVar1;
  }
  FUN_00c46da0((double)(float)uVar4,param_1);
  FUN_00c46da0((double)(float)((ulong)uVar4 >> 0x20),param_1);
  FUN_00c46da0((double)fVar5,param_1);
  return 3;
}


