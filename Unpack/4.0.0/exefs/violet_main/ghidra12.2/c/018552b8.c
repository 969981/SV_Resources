/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018552b8; name: FUN_018552b8
 */


int FUN_018552b8(long param_1,uint param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  char *__s;
  long lVar5;
  long *plVar6;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar5 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar5;
  plVar6 = *(long **)(lVar5 + 0x1c0);
  plVar1 = *(long **)(lVar5 + 0x1c8);
  for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
    lVar5 = *plVar6;
    plVar3 = (long *)(*(code *)**(undefined8 **)(lVar5 + 0x28))((undefined8 *)(lVar5 + 0x28));
    lVar4 = FUN_0116e50c();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) goto LAB_01855344;
    }
  }
  lVar5 = 0;
LAB_01855344:
  lVar5 = lVar5 + (ulong)(param_2 & 0xff) * 0x40;
  __s = (char *)(lVar5 + 0x40);
  __s[0] = '\0';
  __s[1] = '\0';
  __s[2] = '\0';
  __s[3] = '\0';
  __s[4] = '\0';
  __s[5] = '\0';
  __s[6] = '\0';
  __s[7] = '\0';
  *(undefined8 *)(lVar5 + 0x70) = 0;
  *(undefined8 *)(lVar5 + 0x78) = 0;
  *(undefined8 *)(lVar5 + 0x48) = 0;
  *(undefined8 *)(lVar5 + 0x60) = 0;
  *(undefined8 *)(lVar5 + 0x68) = 0;
  *(undefined8 *)(lVar5 + 0x50) = 0;
  *(undefined8 *)(lVar5 + 0x58) = 0;
  iVar2 = snprintf(__s,0x40,"%s",*(undefined8 *)(param_1 + 8));
  return iVar2;
}


