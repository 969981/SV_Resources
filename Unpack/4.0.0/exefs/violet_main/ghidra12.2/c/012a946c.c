/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012a946c; name: FUN_012a946c
 */


void FUN_012a946c(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auStack_38 [8];
  
  if ((param_2 < *(ulong *)(param_1 + 400)) &&
     ((*(ulong *)(param_1 + 0x128) <= param_2 ||
      ((*(ulong *)(*(long *)(param_1 + 0x120) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
        (param_2 & 0x3f) & 1) == 0)))) {
    lVar5 = *(long *)(param_1 + 0xe8);
    lVar7 = *(long *)(lVar5 + param_2 * 0x10);
    if (lVar7 == 0) {
      lVar7 = *(long *)(param_1 + 0x198);
      if (lVar7 == 0) {
        return;
      }
      uVar8 = *(ulong *)(lVar5 + param_2 * 0x10 + 8);
      if (uVar8 < *(ulong *)(lVar7 + 0xb0)) {
        puVar1 = (undefined8 *)(*(long *)(lVar7 + 8) + uVar8 * 0x40);
        pcVar6 = (code *)puVar1[1];
        if (pcVar6 != (code *)0x0) {
          puVar1[2] = 0;
          puVar1[3] = 0;
          *puVar1 = 0;
          puVar1[1] = 0;
          (*pcVar6)(puVar1 + 4);
        }
        puVar3 = PTR_LAB_047d9a10;
        puVar2 = PTR_LAB_047d9a08;
        *puVar1 = PTR_LAB_047d9a00;
        puVar4 = PTR_LAB_047d9a18;
        puVar1[1] = puVar2;
        puVar1[2] = puVar3;
        puVar1[3] = puVar4;
        FUN_012a95ec((long *)(lVar7 + 8),uVar8);
      }
    }
    else if (lVar7 == 1) {
      if (*(long *)(param_1 + 0x1b8) == 0) {
        return;
      }
      FUN_01e35538(*(long *)(param_1 + 0x1b8) + 8,*(undefined8 *)(lVar5 + param_2 * 0x10 + 8),
                   auStack_38);
    }
    else if (lVar7 == 2) {
      if (*(long *)(param_1 + 0x1d8) == 0) {
        return;
      }
      FUN_01e355d4(*(long *)(param_1 + 0x1d8),*(undefined8 *)(lVar5 + param_2 * 0x10 + 8));
    }
    else {
      if (lVar7 != 3) {
        return;
      }
      if (*(long *)(param_1 + 0x1f8) == 0) {
        return;
      }
      FUN_01e356a4(*(long *)(param_1 + 0x1f8),*(undefined8 *)(lVar5 + param_2 * 0x10 + 8));
    }
    if (param_2 < (ulong)(*(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8) >> 4)) {
      FUN_00d7640c((long *)(param_1 + 0xe8),param_2);
    }
  }
  return;
}


