/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0350cedc; name: FUN_0350cedc
 */


void FUN_0350cedc(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  uVar2 = *(uint *)(param_2 + 0x18);
  uVar5 = (ulong)uVar2;
  if (uVar2 != 0) {
    if (*(int *)(param_1 + 0x140) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x138);
    }
    uVar6 = *(undefined8 *)PTR_DAT_047e6f38;
    lVar4 = lVar4 + (ulong)*(uint *)(param_2 + 0x14) * 0x20;
    uVar7 = uVar5;
    do {
      FUN_034b3b18(uVar6,*(undefined4 *)(lVar4 + 0x14),lVar4);
      uVar7 = uVar7 - 1;
      lVar4 = lVar4 + 0x20;
    } while (uVar7 != 0);
    (**(code **)(*(long *)(param_1 + 0x68) + 0x48))((long *)(param_1 + 0x68),uVar2);
    puVar3 = PTR_DAT_047e2fd0;
    if (0 < (int)uVar2) {
      lVar4 = 0;
      do {
        lVar1 = *(long *)(param_1 + 0x138) + lVar4;
        if (*(char *)(lVar1 + 0x18) != '\0') {
          (**(code **)(puVar3 + 0x30))(5,*(undefined8 *)(lVar1 + 8));
          *(undefined8 *)(*(long *)(param_1 + 0x138) + lVar4 + 8) = 0;
        }
        lVar4 = lVar4 + 0x20;
      } while (uVar5 * 0x20 != lVar4);
    }
    uVar2 = *(int *)(param_1 + 0x140) - uVar2;
    if (uVar2 != 0) {
      memmove(*(void **)(param_1 + 0x138),(void *)((long)*(void **)(param_1 + 0x138) + uVar5 * 0x20)
              ,(ulong)uVar2 << 5);
    }
    *(uint *)(param_1 + 0x140) = uVar2;
    *(undefined8 *)(param_2 + 0x14) = 0;
  }
  return;
}


