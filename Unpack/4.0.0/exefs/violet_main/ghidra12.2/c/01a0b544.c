/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a0b544; name: FUN_01a0b544
 */


void FUN_01a0b544(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  if (((DAT_04839790 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04839790), iVar4 != 0)) {
    FUN_00100190(&LAB_00b1baa8,&DAT_04839780,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839790);
  }
  lVar3 = DAT_04839780;
  DAT_04839778 = DAT_04839780;
  if (DAT_04839780 != 0) {
    puVar1 = (undefined8 *)(DAT_04839780 + 0x4140);
    pcVar5 = *(code **)(DAT_04839780 + 0x4148);
    if (pcVar5 != (code *)0x0) {
      lVar2 = DAT_04839780 + 0x4160;
      *(undefined8 *)(DAT_04839780 + 0x4150) = 0;
      *(undefined8 *)(lVar3 + 0x4158) = 0;
      *puVar1 = 0;
      *(undefined8 *)(lVar3 + 0x4148) = 0;
      (*pcVar5)(lVar2);
    }
    if ((code *)param_1[2] != (code *)0x0) {
      (*(code *)param_1[2])(param_1 + 4,lVar3 + 0x4160);
      uVar6 = param_1[3];
      *(undefined8 *)(lVar3 + 0x4148) = param_1[1];
      *(undefined8 *)(lVar3 + 0x4158) = uVar6;
      uVar6 = *param_1;
      *(undefined8 *)(lVar3 + 0x4150) = param_1[2];
      *puVar1 = uVar6;
    }
  }
  return;
}


