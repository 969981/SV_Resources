/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02923358; name: FUN_02923358
 */


void FUN_02923358(long param_1,long param_2,undefined1 param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  uint uVar10;
  
  uVar5 = FUN_010f9128(*(undefined4 *)(*(long *)(param_1 + 8) + 0x36c),
                       *(undefined1 *)(*(long *)(param_1 + 8) + 0x370),param_3);
  puVar3 = PTR_DAT_047d3f08;
  puVar2 = PTR_DAT_047d3f00;
  bVar1 = *(byte *)(param_2 + 0x30);
  if ((int)(uint)bVar1 <= (int)uVar5) {
    return;
  }
  uVar10 = (uint)bVar1;
  do {
    if (((uVar5 & 0xff) < (uint)bVar1) &&
       (plVar9 = *(long **)(param_2 + (ulong)(uVar5 & 0xff) * 8), plVar9 != (long *)0x0)) {
      puVar7 = (undefined8 *)(**(code **)plVar9[5])(plVar9 + 5);
      if (((*puVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar2), iVar6 != 0)) {
        uVar8 = FUN_01b07aa4();
        *(undefined8 *)puVar3 = uVar8;
        __cxa_guard_release(puVar2);
      }
      for (; puVar7 != (undefined8 *)0x0; puVar7 = (undefined8 *)*puVar7) {
        if (puVar7 == (undefined8 *)puVar3) {
          sVar4 = (**(code **)(*plVar9 + 0xf0))(plVar9);
          if (sVar4 == 0x95) {
            (**(code **)(*plVar9 + 0x2d0))(plVar9);
          }
          break;
        }
      }
    }
    uVar5 = uVar5 + 1;
    if (uVar5 == uVar10) {
      return;
    }
    bVar1 = *(byte *)(param_2 + 0x30);
  } while( true );
}


