/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018e84f0; name: FUN_018e84f0
 */


void FUN_018e84f0(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  (**(code **)(*param_2 + 0x80))(param_2);
  puVar2 = PTR_DAT_047dcd58;
  puVar1 = PTR_DAT_047dcd50;
  if (*(char *)(param_1 + 0x60) != '\0') {
    uVar7 = 0;
    do {
      lVar5 = *(long *)(param_1 + uVar7 * 8 + 0x30);
      puVar6 = (undefined8 *)(lVar5 + 0x28);
      puVar6 = (undefined8 *)(**(code **)*puVar6)(puVar6);
      if ((*puVar1 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(puVar1);
        if (iVar3 != 0) {
          uVar4 = FUN_01af5520();
          *(undefined8 *)puVar2 = uVar4;
          __cxa_guard_release(puVar1);
        }
      }
      for (; puVar6 != (undefined8 *)0x0; puVar6 = (undefined8 *)*puVar6) {
        if (puVar6 == (undefined8 *)puVar2) {
          (**(code **)(*param_2 + 0x28))(param_2,*(undefined8 *)(lVar5 + 0x48));
          break;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(byte *)(param_1 + 0x60));
  }
  return;
}


