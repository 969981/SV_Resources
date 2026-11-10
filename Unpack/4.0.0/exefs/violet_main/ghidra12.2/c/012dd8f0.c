/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012dd8f0; name: FUN_012dd8f0
 */


void FUN_012dd8f0(long param_1,undefined8 *param_2)

{
  bool bVar1;
  code *pcVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  
  uVar7 = (ulong)*(byte *)(param_1 + 0x20d);
  lVar5 = *(long *)(param_1 + uVar7 * 8 + 0x18);
  if (*(int *)(lVar5 + 0x24c) != 1) {
    pcVar2 = *(code **)(lVar5 + 0x268);
    if (pcVar2 != (code *)0x0) {
      *(undefined8 *)(lVar5 + 0x270) = 0;
      *(undefined8 *)(lVar5 + 0x278) = 0;
      *(undefined8 *)(lVar5 + 0x260) = 0;
      *(undefined8 *)(lVar5 + 0x268) = 0;
      (*pcVar2)(lVar5 + 0x280);
    }
    uVar3 = *param_2;
    *(code **)(lVar5 + 0x260) = FUN_017090b8;
    *(undefined1 **)(lVar5 + 0x268) = &LAB_02b78828;
    *(undefined1 **)(lVar5 + 0x278) = &LAB_02b78838;
    *(undefined8 *)(lVar5 + 0x280) = uVar3;
    *(undefined1 **)(lVar5 + 0x270) = &LAB_02b7882c;
    *(undefined4 *)(lVar5 + 0x24c) = 1;
  }
  lVar5 = *(long *)(param_1 + (uVar7 + 1) * 8 + 0x18);
  piVar6 = (int *)(lVar5 + 0x24c);
  bVar1 = *piVar6 == 1;
  if (uVar7 + 1 != 2) {
    if (*piVar6 != 1) {
      pcVar2 = *(code **)(lVar5 + 0x268);
      if (pcVar2 != (code *)0x0) {
        *(undefined8 *)(lVar5 + 0x270) = 0;
        *(undefined8 *)(lVar5 + 0x278) = 0;
        *(undefined8 *)(lVar5 + 0x260) = 0;
        *(undefined8 *)(lVar5 + 0x268) = 0;
        (*pcVar2)(lVar5 + 0x280);
      }
      uVar3 = *param_2;
      *(code **)(lVar5 + 0x260) = FUN_017090b8;
      *(undefined1 **)(lVar5 + 0x268) = &LAB_02b78828;
      *(undefined1 **)(lVar5 + 0x278) = &LAB_02b78838;
      *(undefined8 *)(lVar5 + 0x280) = uVar3;
      *(undefined1 **)(lVar5 + 0x270) = &LAB_02b7882c;
      *(undefined4 *)(lVar5 + 0x24c) = 1;
    }
    param_1 = param_1 + (uVar7 | 2) * 8;
    lVar5 = *(long *)(param_1 + 0x18);
    piVar6 = (int *)(lVar5 + 0x24c);
    bVar1 = *piVar6 == 1;
    if ((uVar7 | 2) != 2) {
      plVar4 = (long *)(param_1 + 0x20);
      do {
        if (!bVar1) {
          pcVar2 = *(code **)(lVar5 + 0x268);
          if (pcVar2 != (code *)0x0) {
            *(undefined8 *)(lVar5 + 0x270) = 0;
            *(undefined8 *)(lVar5 + 0x278) = 0;
            *(undefined8 *)(lVar5 + 0x260) = 0;
            *(undefined8 *)(lVar5 + 0x268) = 0;
            (*pcVar2)(lVar5 + 0x280);
          }
          uVar3 = *param_2;
          *(code **)(lVar5 + 0x260) = FUN_017090b8;
          *(undefined1 **)(lVar5 + 0x268) = &LAB_02b78828;
          *(undefined8 *)(lVar5 + 0x280) = uVar3;
          *(undefined1 **)(lVar5 + 0x270) = &LAB_02b7882c;
          *(undefined1 **)(lVar5 + 0x278) = &LAB_02b78838;
          *piVar6 = 1;
        }
        lVar5 = *plVar4;
        piVar6 = (int *)(lVar5 + 0x24c);
        bVar1 = *piVar6 == 1;
        plVar4 = plVar4 + 1;
      } while( true );
    }
  }
  if (!bVar1) {
    pcVar2 = *(code **)(lVar5 + 0x268);
    if (pcVar2 != (code *)0x0) {
      *(undefined8 *)(lVar5 + 0x270) = 0;
      *(undefined8 *)(lVar5 + 0x278) = 0;
      *(undefined8 *)(lVar5 + 0x260) = 0;
      *(undefined8 *)(lVar5 + 0x268) = 0;
      (*pcVar2)(lVar5 + 0x280);
    }
    uVar3 = *param_2;
    *(code **)(lVar5 + 0x260) = FUN_017090b8;
    *(undefined1 **)(lVar5 + 0x268) = &LAB_02b78828;
    *(undefined1 **)(lVar5 + 0x270) = &LAB_02b7882c;
    *(undefined8 *)(lVar5 + 0x280) = uVar3;
    *(undefined1 **)(lVar5 + 0x278) = &LAB_02b78838;
    *piVar6 = 1;
  }
  return;
}


