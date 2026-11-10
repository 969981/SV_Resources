/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0185f480; name: FUN_0185f480
 */


void FUN_0185f480(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  if (((DAT_048405f8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_048405f8), iVar4 != 0)) {
    FUN_00100190(&LAB_02acf048,&DAT_048405e8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048405f8);
  }
  lVar3 = DAT_048405e8;
  DAT_04840600 = DAT_048405e8;
  pcVar5 = *(code **)(DAT_048405e8 + 0x88);
  puVar1 = (undefined8 *)(DAT_048405e8 + 0x80);
  if (pcVar5 != (code *)0x0) {
    lVar2 = DAT_048405e8 + 0xa0;
    *(undefined8 *)(DAT_048405e8 + 0x90) = 0;
    *(undefined8 *)(lVar3 + 0x98) = 0;
    *puVar1 = 0;
    *(undefined8 *)(lVar3 + 0x88) = 0;
    (*pcVar5)(lVar2);
  }
  if ((code *)param_1[2] != (code *)0x0) {
    (*(code *)param_1[2])(param_1 + 4,lVar3 + 0xa0);
    uVar6 = param_1[3];
    *(undefined8 *)(lVar3 + 0x88) = param_1[1];
    *(undefined8 *)(lVar3 + 0x98) = uVar6;
    uVar6 = *param_1;
    *(undefined8 *)(lVar3 + 0x90) = param_1[2];
    *puVar1 = uVar6;
  }
  return;
}


