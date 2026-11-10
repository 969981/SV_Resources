/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b63798; name: FUN_00b63798
 */


uint FUN_00b63798(byte param_1,char param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  char local_34 [4];
  
  if (((DAT_0483a3b8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0483a3b8), iVar3 != 0)) {
    FUN_00100190(&LAB_00b651c8,&DAT_0483a3a8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483a3b8);
  }
  DAT_0483a3a0 = DAT_0483a3a8;
  if (DAT_0483a3a8 != 0) {
    uVar4 = 0;
    if ((param_1 == 0xfd) || (param_2 == -3)) goto LAB_00b638b0;
    lVar7 = *(long *)(DAT_0483a3a8 + (ulong)param_1 * 8 + 0x40);
    if ((lVar7 != 0) &&
       (((*(char *)(lVar7 + 0x60) != '\0' ||
         ((*(long *)(lVar7 + 0x48) != 0 && (*(short *)(*(long *)(lVar7 + 0x48) + 0x1a) != 0)))) &&
        (plVar8 = *(long **)(lVar7 + 0x58), plVar8 != (long *)0x0)))) {
      uVar4 = 0;
      if (*(long *)PTR_DAT_047d0a08 == 0) goto LAB_00b638b0;
      bVar2 = *(byte *)(lVar7 + 0x68);
      local_34[0] = param_2;
      iVar3 = FUN_00f21480();
      if (iVar3 == 1) {
        uVar1 = bVar2 + 4;
        if (((uVar1 & 0xff) < 8) && (*(long *)PTR_DAT_047d0860 != 0)) {
          lVar7 = FUN_00f21488(*(long *)PTR_DAT_047d0860 + 0x10,(&DAT_0485ea48)[(ulong)uVar1 & 0xff]
                               ,0x81);
          uVar4 = 0;
          if (lVar7 == 0) goto LAB_00b638b0;
          lVar5 = (**(code **)(*plVar8 + 0x30))(plVar8,local_34);
          uVar4 = 0;
          if (lVar5 == 0) goto LAB_00b638b0;
          lVar6 = (**(code **)(*plVar8 + 0x20))(plVar8);
          if (lVar5 != lVar6) {
            uVar4 = FUN_00f21f18(lVar7,lVar5,uVar1);
            goto LAB_00b638b0;
          }
        }
      }
    }
  }
  uVar4 = 0;
LAB_00b638b0:
  return uVar4 & 1;
}


