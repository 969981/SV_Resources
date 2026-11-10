/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01766920; name: FUN_01766920
 */


void FUN_01766920(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_047d8d48;
  puVar1 = PTR_DAT_047d8d40;
  if (param_1 != param_2) {
    do {
      lVar7 = *param_1;
      if (lVar7 != 0) {
        plVar4 = (long *)(*(code *)**(undefined8 **)(lVar7 + 8))((undefined8 *)(lVar7 + 8));
        if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar1), iVar3 != 0)) {
          uVar6 = FUN_0168ea04();
          *(undefined8 *)puVar2 = uVar6;
          __cxa_guard_release(puVar1);
        }
        for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
          if (plVar4 == (long *)puVar2) {
            uVar5 = (**(code **)(*(long *)*param_1 + 0xc0))();
            if ((uVar5 & 1) == 0) {
              FUN_0143cdb0(lVar7 + -0x20,*(undefined1 *)*param_3);
            }
            break;
          }
        }
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return;
}


