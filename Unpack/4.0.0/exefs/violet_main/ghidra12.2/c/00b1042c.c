/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b1042c; name: FUN_00b1042c
 */


void FUN_00b1042c(undefined8 param_1,undefined8 param_2,short *param_3)

{
  long *plVar1;
  short sVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_88 [9];
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar6 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar6;
  plVar1 = *(long **)(lVar6 + 0x1c8);
  plVar3 = *(long **)(lVar6 + 0x1c0);
  do {
    if (plVar3 == plVar1) {
      return;
    }
    lVar6 = *plVar3;
    uVar5 = FUN_00a371b8(lVar6 + 0x28);
    plVar3 = plVar3 + 1;
  } while ((uVar5 & 1) == 0);
  if (*(long *)(lVar6 + 0xb00) == 0) {
LAB_00b105c4:
    memset(local_88,0,0x44);
  }
  else {
    if (*(short *)(lVar6 + 0x178) == 0xe) {
      if (param_3 == (short *)0x0) {
        if (*(char *)(lVar6 + 0xb3c) != '\0') goto LAB_00b104d8;
      }
      else if (*param_3 != 0xe) {
LAB_00b104d8:
        FUN_00b10a04(param_1,lVar6,param_2);
        if (*(long *)(lVar6 + 0xb00) == 0) goto LAB_00b105c4;
      }
    }
    sVar2 = *(short *)(lVar6 + 0x178);
    memcpy(local_88,(void *)(lVar6 + 0x180),0x44);
    if (((sVar2 == 0xf) &&
        (((param_3 == (short *)0x0 || (*param_3 != 0xf)) && (*(long *)(lVar6 + 0xb70) == 0)))) &&
       (*(int *)(lVar6 + 0xb7c) == -1)) {
      memset((void *)(lVar6 + 0xb80),0xff,0x54);
      *(undefined8 *)(lVar6 + 0xbe0) = 0;
      *(undefined8 *)(lVar6 + 0xbe8) = 0;
      *(undefined8 *)(lVar6 + 0xbf0) = 0;
      *(undefined8 *)(lVar6 + 0xbf8) = 0;
      if (DAT_04835690 != (code *)0x0) {
        (*DAT_04835690)(&DAT_048356b0);
      }
      nn::crypto::GenerateCryptographicallyRandomBytes(local_88,8);
      *(undefined8 *)(lVar6 + 0xb70) = local_88[0];
      FUN_00b10ca0(param_1,lVar6,param_2);
      *(undefined2 *)(lVar6 + 0xc00) =
           *(undefined2 *)(*(long *)(*(long *)(lVar6 + 0xb00) + 0x10) + 8);
      if (DAT_04835610 != (code *)0x0) {
        local_88[0] = *(undefined8 *)(lVar6 + 0xb70);
        (*DAT_04835610)(&DAT_04835630,local_88);
      }
    }
  }
  return;
}


