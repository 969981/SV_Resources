/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031c2858; name: FUN_031c2858
 */


void FUN_031c2858(long *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = tpidr_el0;
  lVar3 = *(long *)(lVar5 + 0x1000b8);
  if (lVar3 == 0) {
    lVar3 = FUN_00e5d3b4();
    *(long *)(lVar5 + 0x1000b8) = lVar3;
  }
  lVar6 = *(long *)(lVar3 + 0x3e0);
  if (lVar6 != 0) {
    iVar2 = (**(code **)(*param_1 + 0x30))(param_1);
    puVar1 = *(undefined8 **)(lVar6 + 0x10);
    uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= *(ulong *)(lVar6 + 0x18)) &&
       (*(ulong *)(lVar6 + 0x10) = uVar4, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "MiIn use (KiB)";
      *(float *)(puVar1 + 1) = (float)iVar2 * 0.0009765625;
    }
    lVar3 = *(long *)(lVar5 + 0x1000b8);
  }
  if (lVar3 == 0) {
    lVar3 = FUN_00e5d3b4();
    *(long *)(lVar5 + 0x1000b8) = lVar3;
  }
  lVar5 = *(long *)(lVar3 + 0x3e0);
  if (lVar5 != 0) {
    iVar2 = (**(code **)(*param_1 + 0x38))(param_1);
    puVar1 = *(undefined8 **)(lVar5 + 0x10);
    uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= *(ulong *)(lVar5 + 0x18)) &&
       (*(ulong *)(lVar5 + 0x10) = uVar4, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "MiPeak (KiB)";
      *(float *)(puVar1 + 1) = (float)iVar2 * 0.0009765625;
    }
  }
  return;
}


