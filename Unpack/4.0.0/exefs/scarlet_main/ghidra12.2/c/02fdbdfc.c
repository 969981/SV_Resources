/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fdbdfc; name: FUN_02fdbdfc
 */


void FUN_02fdbdfc(long param_1,ulong param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined1 uVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined4 uVar10;
  long local_40;
  long lStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  switch(*(undefined2 *)(param_2 + 4)) {
  case 1:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar4 = *(ulong *)(param_2 + 8);
    uVar2 = (uint)*(byte *)(param_2 + 0x10);
    uVar6 = (uint)*(byte *)(param_2 + 0x11);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x70);
    goto LAB_02fdc56c;
  case 2:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar6 = (uint)*(byte *)(param_2 + 0x10);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x68);
    goto LAB_02fdc34c;
  case 3:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar6 = (uint)*(byte *)(param_2 + 0x10);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x80);
    goto LAB_02fdc34c;
  case 4:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar4 = param_2 + 0x10;
    uVar5 = 1;
    uVar8 = *(undefined8 *)(param_2 + 8);
    uVar7 = *(undefined1 *)(param_2 + 0x18);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xe8);
    goto LAB_02fdc5ac;
  case 5:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar6 = (uint)*(byte *)(param_2 + 0x10);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xf0);
    goto LAB_02fdc34c;
  case 6:
    local_40 = *(long *)(param_2 + 0x50);
    lStack_38 = *(undefined8 *)(param_2 + 0x58);
    local_30 = *(undefined8 *)(param_2 + 0x60);
    uStack_28 = 0;
    (**(code **)(**(long **)(param_1 + 0x20) + 0x88))
              (*(long **)(param_1 + 0x20),*(undefined8 *)(param_2 + 8),param_2 + 0x20,&local_40,
               *(undefined1 *)(param_2 + 0x10));
    return;
  case 7:
    local_40 = *(long *)(param_2 + 0x18);
    lStack_38 = *(undefined8 *)(param_2 + 0x20);
    local_30 = *(undefined8 *)(param_2 + 0x28);
    uStack_28 = 0;
    (**(code **)(**(long **)(param_1 + 0x20) + 0x90))
              (*(long **)(param_1 + 0x20),*(undefined8 *)(param_2 + 8),&local_40,
               *(undefined1 *)(param_2 + 0x10));
    return;
  case 8:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar4 = param_2 + 0x20;
    uVar5 = *(undefined1 *)(param_2 + 0x10);
    uVar8 = *(undefined8 *)(param_2 + 8);
    uVar7 = *(undefined1 *)(param_2 + 0x11);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x98);
    goto LAB_02fdc5ac;
  case 9:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar8 = *(undefined8 *)(param_2 + 8);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xa0);
    goto LAB_02fdc034;
  case 10:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar8 = *(undefined8 *)(param_2 + 8);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xa8);
    goto LAB_02fdbff4;
  case 0xb:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar8 = *(undefined8 *)(param_2 + 8);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xb0);
    goto LAB_02fdbff4;
  case 0xc:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar8 = *(undefined8 *)(param_2 + 8);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xc0);
    goto LAB_02fdbff4;
  case 0xd:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar8 = *(undefined8 *)(param_2 + 8);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 200);
LAB_02fdbff4:
    lVar3 = param_2 + 0x10;
    uVar7 = 0;
LAB_02fdc124:
                    /* WARNING: Could not recover jumptable at 0x02fdc12c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(plVar1,uVar8,lVar3,uVar7);
    return;
  case 0xe:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar8 = *(undefined8 *)(param_2 + 8);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xd0);
    goto LAB_02fdc034;
  case 0xf:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar8 = *(undefined8 *)(param_2 + 8);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xb8);
LAB_02fdc034:
                    /* WARNING: Could not recover jumptable at 0x02fdc044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(plVar1,uVar8,param_2 + 0x10,param_2 + 0x20,0);
    return;
  case 0x10:
                    /* WARNING: Could not recover jumptable at 0x02fdc068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x20) + 0x1b8))
              (*(undefined4 *)(param_2 + 0xc),*(long **)(param_1 + 0x20),
               *(undefined4 *)(param_2 + 8));
    return;
  case 0x11:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar8 = *(undefined8 *)(param_2 + 8);
    uVar2 = (uint)*(byte *)(param_2 + 0x10);
    uVar7 = *(undefined1 *)(param_2 + 0x12);
    uVar5 = *(undefined1 *)(param_2 + 0x11);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xd8);
    goto LAB_02fdc1a4;
  case 0x12:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar8 = *(undefined8 *)(param_2 + 8);
    uVar4 = (ulong)*(uint *)(param_2 + 0x10);
    uVar5 = *(undefined1 *)(param_2 + 0x15);
    uVar7 = *(undefined1 *)(param_2 + 0x14);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x198);
    goto LAB_02fdc5ac;
  case 0x13:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar10 = *(undefined4 *)(param_2 + 0x14);
    uVar8 = *(undefined8 *)(param_2 + 8);
    uVar7 = *(undefined1 *)(param_2 + 0x18);
    if (*(int *)(param_2 + 0x10) == 0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xf8);
    }
    else {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x100);
    }
    goto LAB_02fdc594;
  case 0x14:
    plVar1 = *(long **)(param_1 + 0x20);
    lVar3 = param_2 + 0x10;
    uVar8 = *(undefined8 *)(param_2 + 8);
    uVar7 = *(undefined1 *)(param_2 + 0x40);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x108);
    goto LAB_02fdc124;
  case 0x15:
    plVar1 = *(long **)(param_1 + 0x20);
    lVar3 = 0;
    uVar8 = *(undefined8 *)(param_2 + 8);
    uVar7 = *(undefined1 *)(param_2 + 0x10);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x108);
    goto LAB_02fdc124;
  case 0x16:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar7 = *(undefined1 *)(param_2 + 0x18);
    uVar8 = *(undefined8 *)(param_2 + 8);
    lVar3 = *(long *)(param_2 + 0x10);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x110);
    goto LAB_02fdc124;
  case 0x17:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar9 = *(ulong *)(param_2 + 8);
    uVar4 = (ulong)*(ushort *)(param_2 + 0x10);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xe0);
    goto LAB_02fdc42c;
  case 0x18:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar8 = *(undefined8 *)(param_2 + 8);
    uVar4 = (ulong)*(ushort *)(param_2 + 0x10);
    uVar5 = *(undefined1 *)(param_2 + 0x13);
    uVar7 = *(undefined1 *)(param_2 + 0x12);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x120);
    goto LAB_02fdc5ac;
  case 0x19:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar8 = *(undefined8 *)(param_2 + 8);
    uVar4 = (ulong)*(byte *)(param_2 + 0x10);
    uVar5 = *(undefined1 *)(param_2 + 0x12);
    uVar7 = *(undefined1 *)(param_2 + 0x11);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x128);
    goto LAB_02fdc5ac;
  case 0x1a:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar8 = *(undefined8 *)(param_2 + 8);
    uVar2 = *(uint *)(param_2 + 0x10);
    uVar7 = *(undefined1 *)(param_2 + 0x15);
    uVar5 = *(undefined1 *)(param_2 + 0x14);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x118);
LAB_02fdc1a4:
                    /* WARNING: Could not recover jumptable at 0x02fdc1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(plVar1,uVar8,uVar2,uVar7,uVar5);
    return;
  case 0x1b:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar8 = *(undefined8 *)(param_2 + 8);
    uVar4 = (ulong)*(uint *)(param_2 + 0x14);
    uVar5 = *(undefined1 *)(param_2 + 0x19);
    uVar7 = *(undefined1 *)(param_2 + 0x18);
    if (*(char *)(param_2 + 0x10) == '\0') {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x160);
    }
    else {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x158);
    }
LAB_02fdc5ac:
                    /* WARNING: Could not recover jumptable at 0x02fdc5b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(plVar1,uVar8,uVar4,uVar5,uVar7);
    return;
  case 0x1c:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar4 = *(ulong *)(param_2 + 8);
    uVar2 = (uint)*(byte *)(param_2 + 0x10);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x178);
    goto LAB_02fdc5d0;
  case 0x1d:
    plVar1 = *(long **)(param_1 + 0x20);
    param_2 = *(ulong *)(param_2 + 8);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x180);
    break;
  case 0x1e:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar4 = *(ulong *)(param_2 + 8);
    uVar2 = (uint)*(byte *)(param_2 + 0x10);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x148);
    goto LAB_02fdc5d0;
  case 0x1f:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar4 = *(ulong *)(param_2 + 8);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x150);
    uVar2 = (uint)*(byte *)(param_2 + 0x10);
    goto LAB_02fdc5d0;
  case 0x20:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar4 = *(ulong *)(param_2 + 8);
    uVar2 = (uint)*(byte *)(param_2 + 0x10);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x140);
    goto LAB_02fdc5d0;
  case 0x21:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar4 = param_2 + 0x10;
    uVar9 = (ulong)*(uint *)(param_2 + 8);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x1a8);
    goto LAB_02fdc42c;
  case 0x22:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar4 = param_2 + 0x10;
    uVar9 = (ulong)*(uint *)(param_2 + 8);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x1b0);
    goto LAB_02fdc42c;
  case 0x23:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar10 = *(undefined4 *)(param_2 + 0x10);
    uVar8 = *(undefined8 *)(param_2 + 8);
    uVar7 = *(undefined1 *)(param_2 + 0x14);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x130);
LAB_02fdc594:
                    /* WARNING: Could not recover jumptable at 0x02fdc5a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(uVar10,plVar1,uVar8,uVar7);
    return;
  case 0x24:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar4 = param_2 + 0x10;
    uVar9 = *(ulong *)(param_2 + 8);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x138);
    goto LAB_02fdc42c;
  case 0x25:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar4 = 0;
    uVar9 = *(ulong *)(param_2 + 8);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x138);
    goto LAB_02fdc42c;
  case 0x26:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar4 = *(ulong *)(param_2 + 8);
    uVar2 = (uint)*(ushort *)(param_2 + 0x10);
    if (*(long *)(param_2 + 0x18) != 0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x168);
LAB_02fdc3c0:
                    /* WARNING: Could not recover jumptable at 0x02fdc3cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(plVar1,uVar4,uVar2,param_2 + 0x20);
      return;
    }
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x170);
    goto LAB_02fdc5d0;
  case 0x27:
    plVar1 = *(long **)(param_1 + 0x20);
    param_2 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    UNRECOVERED_JUMPTABLE_00 = *(code **)*plVar1;
    break;
  case 0x28:
    plVar1 = *(long **)(param_1 + 0x20);
    param_2 = param_2 + 0x10;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 8);
    break;
  case 0x29:
                    /* WARNING: Could not recover jumptable at 0x02fdc334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x20) + 0x10))(*(undefined4 *)(param_2 + 8));
    return;
  default:
    return;
  case 0x2d:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar6 = (uint)*(byte *)(param_2 + 0x10);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x1c8);
LAB_02fdc34c:
    uVar4 = param_2 + 8;
    uVar2 = 1;
LAB_02fdc56c:
                    /* WARNING: Could not recover jumptable at 0x02fdc574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(plVar1,uVar4,uVar2,uVar6);
    return;
  case 0x2e:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar4 = *(ulong *)(param_2 + 8);
    uVar2 = (uint)*(byte *)(param_2 + 0x10);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x1d8);
    goto LAB_02fdc5d0;
  case 0x2f:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar4 = *(ulong *)(param_2 + 8);
    uVar2 = (uint)*(byte *)(param_2 + 0x10);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x1d0);
    goto LAB_02fdc5d0;
  case 0x30:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar9 = *(ulong *)(param_2 + 8);
    uVar4 = (ulong)*(uint *)(param_2 + 0x10);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x1f0);
    goto LAB_02fdc42c;
  case 0x31:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar4 = *(ulong *)(param_2 + 8);
    uVar2 = (uint)*(ushort *)(param_2 + 0x10);
    if (*(long *)(param_2 + 0x18) != 0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x1f8);
      goto LAB_02fdc3c0;
    }
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x200);
    goto LAB_02fdc5d0;
  case 0x32:
                    /* WARNING: Could not recover jumptable at 0x02fdc3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x20) + 600))();
    return;
  case 0x33:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar9 = param_2 + 0x10;
    uVar4 = *(ulong *)(param_2 + 8);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x268);
    goto LAB_02fdc42c;
  case 0x36:
    plVar1 = *(long **)(param_1 + 0x20);
    param_2 = *(ulong *)(param_2 + 8);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x28);
    break;
  case 0x37:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar9 = param_2 + 0x10;
    uVar4 = *(ulong *)(param_2 + 0x30);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x30);
LAB_02fdc42c:
                    /* WARNING: Could not recover jumptable at 0x02fdc434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(plVar1,uVar9,uVar4);
    return;
  case 0x38:
    plVar1 = *(long **)(param_1 + 0x20);
    param_2 = param_2 + 0x10;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x260);
    break;
  case 0x39:
    plVar1 = *(long **)(param_1 + 0x20);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 400);
    goto LAB_02fdc4d4;
  case 0x3a:
    plVar1 = *(long **)(param_1 + 0x20);
    param_2 = (ulong)*(uint *)(param_2 + 8);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x1a0);
    break;
  case 0x3e:
    plVar1 = *(long **)(param_1 + 0x20);
    param_2 = *(ulong *)(param_2 + 8);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x18);
    break;
  case 0x3f:
    plVar1 = *(long **)(param_1 + 0x20);
    param_2 = *(ulong *)(param_2 + 8);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x20);
    break;
  case 0x40:
    plVar1 = *(long **)(param_1 + 0x20);
    param_2 = (ulong)*(uint *)(param_2 + 8);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x1e8);
    break;
  case 0x41:
    plVar1 = *(long **)(param_1 + 0x20);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x48);
    goto LAB_02fdc4d4;
  case 0x42:
    plVar1 = *(long **)(param_1 + 0x20);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x58);
LAB_02fdc4d4:
    uVar4 = param_2 + 8;
    uVar2 = 1;
    goto LAB_02fdc5d0;
  case 0x44:
    plVar1 = *(long **)(param_1 + 0x20);
    param_2 = (ulong)*(uint *)(param_2 + 8);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x210);
    break;
  case 0x45:
    plVar1 = *(long **)(param_1 + 0x20);
    param_2 = (ulong)*(uint *)(param_2 + 8);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x218);
    break;
  case 0x46:
    plVar1 = *(long **)(param_1 + 0x20);
    param_2 = (ulong)*(uint *)(param_2 + 8);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x220);
    break;
  case 0x47:
    plVar1 = *(long **)(param_1 + 0x20);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x228);
    uVar4 = (ulong)*(uint *)(param_2 + 8);
    uVar2 = *(uint *)(param_2 + 0xc);
LAB_02fdc5d0:
                    /* WARNING: Could not recover jumptable at 0x02fdc5d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(plVar1,uVar4,uVar2);
    return;
  case 0x48:
                    /* WARNING: Could not recover jumptable at 0x02fdc550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x20) + 0x230))
              (*(long **)(param_1 + 0x20),*(undefined4 *)(param_2 + 8),param_2 + 0x10,
               *(undefined8 *)(param_2 + 0x20));
    return;
  case 0x49:
  case 0x4a:
    local_40 = param_2 + 0xc;
    lStack_38 = param_2 + 0x10;
    (**(code **)(**(long **)(param_1 + 0x20) + 0x238))
              (*(long **)(param_1 + 0x20),*(undefined4 *)(param_2 + 8),&local_40);
    return;
  case 0x4b:
    plVar1 = *(long **)(param_1 + 0x20);
    uVar6 = *(uint *)(param_2 + 0x10);
    uVar4 = (ulong)*(uint *)(param_2 + 8);
    uVar2 = *(uint *)(param_2 + 0xc);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x250);
    goto LAB_02fdc56c;
  case 0x4d:
    plVar1 = *(long **)(param_1 + 0x20);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x270);
  }
                    /* WARNING: Could not recover jumptable at 0x02fdc58c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(plVar1,param_2);
  return;
}


