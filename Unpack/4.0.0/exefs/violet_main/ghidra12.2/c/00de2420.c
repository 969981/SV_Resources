/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00de2420; name: FUN_00de2420
 */


void FUN_00de2420(long param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  undefined1 **ppuVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  long local_40;
  undefined1 *puStack_38;
  
  if (*param_2 == 0) {
    return;
  }
  lVar5 = *(long *)(*param_2 + 0x10);
  if (lVar5 == 0) {
    return;
  }
  puVar8 = *(undefined1 **)(lVar5 + 0x340);
  uStack_58 = *(undefined8 *)(lVar5 + 0x348);
  local_50 = *(undefined8 *)(lVar5 + 0x350);
  local_48 = *(long **)(lVar5 + 0x358);
  local_60 = puVar8;
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x18))();
  }
  lVar5 = *(long *)(param_1 + 200);
  lVar1 = *(long *)(param_1 + 0xd0);
  if (lVar5 == lVar1) {
LAB_00de2480:
    if (lVar5 == lVar1) goto LAB_00de2488;
  }
  else {
    do {
      bVar2 = *(byte *)(lVar5 + 0x20);
      puVar6 = &DAT_cbf29ce484222645;
      if (bVar2 != 0) {
        lVar7 = 0x21;
        puVar6 = &DAT_cbf29ce484222645;
        do {
          puVar6 = (undefined1 *)(((ulong)puVar6 ^ (ulong)bVar2) * 0x100000001b3);
          bVar2 = *(byte *)(lVar5 + lVar7);
          lVar7 = lVar7 + 1;
        } while (bVar2 != 0);
      }
      if (puVar6 == puVar8) goto LAB_00de2480;
      lVar5 = lVar5 + 0x68;
    } while (lVar5 != lVar1);
LAB_00de2488:
    lVar5 = *(long *)(param_1 + 0x100);
    lVar1 = *(long *)(param_1 + 0x108);
    local_40 = param_1;
    puStack_38 = (undefined1 *)&local_60;
    ppuVar3 = &local_60;
    if (lVar5 == lVar1) goto LAB_00de249c;
    do {
      puStack_38 = (undefined1 *)ppuVar3;
      uVar4 = FUN_00deab04(&local_40,lVar5);
      if ((uVar4 & 1) != 0) goto LAB_00de2558;
      lVar5 = lVar5 + 0x48;
      ppuVar3 = (undefined1 **)puStack_38;
    } while (lVar1 != lVar5);
    lVar5 = lVar1;
LAB_00de2558:
    if (lVar5 == *(long *)(param_1 + 0x108)) goto LAB_00de249c;
    if (*(char *)(lVar5 + 0x41) == '\0') {
      FUN_01eaba84(param_1 + 0x138,param_2);
      goto LAB_00de249c;
    }
  }
  FUN_00ca1a48(lVar5 + 8,param_2);
LAB_00de249c:
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


