/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0173b8d4; name: FUN_0173b8d4
 */


void FUN_0173b8d4(ushort param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  char *pcVar5;
  char local_8 [8];
  
  snprintf(local_8,7,"FORM%02hu",param_1);
  if (((*PTR_DAT_047d8280 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  lVar4 = *(long *)PTR_DAT_047d8288;
  *(long *)PTR_DAT_047d8290 = lVar4;
  if (local_8[0] != '\0') {
    pcVar5 = (char *)((ulong)local_8 | 1);
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
  }
  plVar3 = *(long **)(*(long *)(lVar4 + 0x200) + 0x60);
  (**(code **)(*plVar3 + 0xa8))(plVar3,&DAT_03c0ffd4,local_8,param_2);
  return;
}


