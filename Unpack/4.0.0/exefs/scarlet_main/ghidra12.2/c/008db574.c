/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008db574; name: FUN_008db574
 */


void FUN_008db574(long param_1,long param_2)

{
  uint *puVar1;
  int *piVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  
  *(ulong *)(param_1 + 0xd0) = (ulong)*(uint *)(param_2 + 4);
  lVar7 = *(long *)(param_1 + 0x40);
  uVar3 = FUN_00ea28ec(param_2 + (ulong)*(uint *)(param_2 + 0x14));
  *(undefined8 *)(param_1 + 0x4b0) = uVar3;
  lVar4 = nn::util::BinaryFileHeader::GetFirstBlock();
  if (*(long *)(param_1 + 0x18) == 0) {
    lVar5 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar5 = (lVar4 - lVar7) + *(long *)(param_1 + 0x28);
  }
  FUN_00ea2920(lVar4,*(undefined8 *)(param_1 + 0x10),*(long *)(param_1 + 0x18),lVar5,uVar3);
  FUN_008dd4b0(param_1 + 0x4c0,*(undefined8 *)(param_1 + 0x10),param_1 + 0x450,lVar4,
               *(undefined1 *)(param_1 + 8));
  if (*(uint *)(param_2 + 8) != 0xffffffff) {
    piVar6 = (int *)(param_2 + (ulong)*(uint *)(param_2 + 8));
    do {
      if (*piVar6 == 0x43535247) {
        *(undefined8 *)(param_1 + 0xd8) = 0;
        if (piVar6 == (int *)0x0) {
          return;
        }
        *(ulong *)(param_1 + 0xd8) = (ulong)(uint)piVar6[1];
        uVar3 = FUN_00ea28ec((long)piVar6 + (ulong)(uint)piVar6[5]);
        *(undefined8 *)(param_1 + 0x4f8) = uVar3;
        lVar4 = nn::util::BinaryFileHeader::GetFirstBlock();
        if (*(long *)(param_1 + 0x18) == 0) {
          lVar7 = 0;
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined8 *)(param_1 + 0x20);
          lVar7 = (lVar4 - lVar7) + *(long *)(param_1 + 0x28);
        }
        FUN_00ea2920(lVar4,*(undefined8 *)(param_1 + 0x10),*(long *)(param_1 + 0x18),lVar7,uVar3);
        FUN_008dd9d4(param_1 + 0x508,*(undefined8 *)(param_1 + 0x10),param_1 + 0x450,lVar4);
        return;
      }
      puVar1 = (uint *)(piVar6 + 3);
      piVar2 = (int *)((long)piVar6 + (ulong)*puVar1);
      piVar6 = (int *)0x0;
      if (*puVar1 != 0xffffffff) {
        piVar6 = piVar2;
      }
    } while (piVar6 != (int *)0x0);
  }
  *(undefined8 *)(param_1 + 0xd8) = 0;
  return;
}


