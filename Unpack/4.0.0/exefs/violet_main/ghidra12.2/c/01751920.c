/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01751920; name: FUN_01751920
 */


void FUN_01751920(undefined8 *param_1,long *param_2,undefined8 *param_3,byte param_4,uint param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 local_98;
  byte local_96;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long *local_70;
  long local_68;
  
  if (((DAT_04839790 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04839790), iVar8 != 0)) {
    FUN_00100190(&LAB_00b1baa8,&DAT_04839780,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839790);
  }
  lVar5 = DAT_04839780;
  DAT_04839778 = DAT_04839780;
  if (DAT_04839780 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  uVar1 = *param_3;
  uVar3 = param_3[1];
  uVar2 = param_3[2];
  plVar4 = (long *)param_3[3];
  if (plVar4 == (long *)0x0) {
    if ((param_5 & 1) != 0) goto LAB_017519a4;
LAB_01751988:
    cVar7 = FUN_01751b54();
    if ((cVar7 != '\x02') && (*(char *)(lVar5 + 0x41c0) == '\0')) goto LAB_017519a4;
  }
  else {
    (**(code **)(*plVar4 + 0x18))(plVar4);
    if ((param_5 & 1) == 0) goto LAB_01751988;
LAB_017519a4:
    puVar11 = *(undefined2 **)(lVar5 + 0x4058);
    puVar10 = *(undefined2 **)(lVar5 + 0x4060);
    if (puVar11 == puVar10) {
LAB_017519b4:
      if ((puVar11 != puVar10) &&
         ((ulong)(*(long *)(lVar5 + 0x40d0) - *(long *)(lVar5 + 0x40c8) >> 4) < 8)) {
        local_88 = CONCAT44(local_88._4_4_,0x80);
        uVar9 = FUN_01751f58(*(undefined8 *)(lVar5 + 8),&local_88);
        FUN_015f9d34(&local_68,uVar9);
        lVar6 = local_68;
        if (local_68 == 0) {
          *param_1 = 0;
          param_1[1] = 0;
        }
        else {
          local_88 = uVar1;
          uStack_80 = uVar3;
          local_78 = uVar2;
          local_70 = plVar4;
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x18))(plVar4);
          }
          FUN_017527fc(lVar6,&local_88);
          if (local_70 != (long *)0x0) {
            (**(code **)(*local_70 + 0x20))();
          }
          local_98 = *puVar11;
          local_96 = param_4 & 1;
          FUN_01751e98(auStack_90,&local_68);
          FUN_01751e44(lVar5 + 0x40c8,&local_98);
          FUN_01751d6c(auStack_90);
          FUN_01752a80(param_1,local_68);
        }
        FUN_01751d6c(&local_68);
        goto LAB_017519c0;
      }
    }
    else {
      do {
        if (*(long *)(puVar11 + 4) == *param_2) goto LAB_017519b4;
        puVar11 = puVar11 + 0x58;
      } while (puVar10 != puVar11);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_017519c0:
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  return;
}


