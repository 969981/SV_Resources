/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0146bc68; name: FUN_0146bc68
 */


char * FUN_0146bc68(long param_1,char *param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *unaff_x21;
  long lVar8;
  long unaff_x25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  
  lVar8 = *(long *)(param_1 + 0x38);
  pcVar2 = (char *)FUN_028a5afc();
  if (pcVar2 == param_2) goto LAB_0146be90;
  if (pcVar2 != param_3) {
    unaff_x25 = tpidr_el0;
    unaff_x26 = &PTR_FUN_045e65b0;
    unaff_x28 = &PTR_LAB_045e6220;
    unaff_x27 = &PTR_LAB_045e65e0;
    do {
      if (*pcVar2 != '|') {
        return pcVar2;
      }
      param_2 = *(char **)(param_1 + 0x38);
      pcVar3 = (char *)FUN_028a5afc(param_1,pcVar2 + 1,param_3);
      unaff_x21 = pcVar2;
      if (pcVar3 == pcVar2 + 1) {
LAB_0146be90:
        pcVar3 = unaff_x21;
        FUN_028a5af0();
LAB_0146be94:
        iVar1 = __cxa_guard_acquire(&DAT_04859438);
        if (iVar1 != 0) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
LAB_0146be10:
        plVar5 = DAT_04859430;
        *(long **)(unaff_x25 + 0x30) = DAT_04859430;
      }
      else {
        plVar5 = *(long **)(unaff_x25 + 0x30);
        if (plVar5 == (long *)0x0) {
          if ((DAT_04859438 & 1) == 0) goto LAB_0146be94;
          goto LAB_0146be10;
        }
      }
      puVar4 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x18,8);
      uVar6 = *(undefined8 *)(lVar8 + 8);
      uVar7 = *(undefined8 *)(param_2 + 8);
      *puVar4 = unaff_x26;
      puVar4[1] = uVar6;
      puVar4[2] = uVar7;
      *(undefined8 **)(lVar8 + 8) = puVar4;
      param_2[8] = '\0';
      param_2[9] = '\0';
      param_2[10] = '\0';
      param_2[0xb] = '\0';
      param_2[0xc] = '\0';
      param_2[0xd] = '\0';
      param_2[0xe] = '\0';
      param_2[0xf] = '\0';
      plVar5 = *(long **)(unaff_x25 + 0x30);
      if (plVar5 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar5 = DAT_04859430;
        *(long **)(unaff_x25 + 0x30) = DAT_04859430;
      }
      puVar4 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x10,8);
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
      *puVar4 = unaff_x28;
      puVar4[1] = uVar6;
      *(undefined8 **)(param_2 + 8) = puVar4;
      *(undefined8 *)(*(long *)(param_1 + 0x38) + 8) = 0;
      plVar5 = *(long **)(unaff_x25 + 0x30);
      if (plVar5 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar5 = DAT_04859430;
        *(long **)(unaff_x25 + 0x30) = DAT_04859430;
      }
      puVar4 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x10,8);
      uVar6 = *(undefined8 *)(param_2 + 8);
      *puVar4 = unaff_x27;
      puVar4[1] = uVar6;
      *(undefined8 **)(*(long *)(param_1 + 0x38) + 8) = puVar4;
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 8);
      pcVar2 = pcVar3;
    } while (pcVar3 != param_3);
  }
  return param_3;
}


