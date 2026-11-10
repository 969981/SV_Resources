/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03415fd0; name: FUN_03415fd0
 */


void FUN_03415fd0(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  FUN_03423fa8();
  puVar1 = PTR_DAT_047e2fd0;
  if (*(long *)(param_1 + 0x78) != 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    (**(code **)(puVar1 + 0x30))(9);
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    *(undefined4 *)(param_1 + 0xb0) = 0;
    (**(code **)(puVar1 + 0x30))(9);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x5f0);
  if (puVar2 != (undefined8 *)0x0) {
    if (*(uint *)(param_1 + 0x5f8) != 0) {
      lVar10 = (ulong)*(uint *)(param_1 + 0x5f8) * 0x50;
      do {
        (**(code **)*puVar2)(puVar2);
        lVar10 = lVar10 + -0x50;
        puVar2 = puVar2 + 10;
      } while (lVar10 != 0);
      puVar2 = *(undefined8 **)(param_1 + 0x5f0);
    }
    *(undefined4 *)(param_1 + 0x5f8) = 0;
    (**(code **)(puVar1 + 0x30))(0xb,puVar2);
    *(undefined8 *)(param_1 + 0x5f0) = 0;
    *(undefined4 *)(param_1 + 0x5fc) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x628);
  if (puVar2 != (undefined8 *)0x0) {
    if (*(uint *)(param_1 + 0x630) != 0) {
      lVar10 = (ulong)*(uint *)(param_1 + 0x630) * 0x50;
      do {
        (**(code **)*puVar2)(puVar2);
        lVar10 = lVar10 + -0x50;
        puVar2 = puVar2 + 10;
      } while (lVar10 != 0);
      puVar2 = *(undefined8 **)(param_1 + 0x628);
    }
    *(undefined4 *)(param_1 + 0x630) = 0;
    (**(code **)(puVar1 + 0x30))(0xb,puVar2);
    *(undefined8 *)(param_1 + 0x628) = 0;
    *(undefined4 *)(param_1 + 0x634) = 0;
  }
  if (*(long *)(param_1 + 0x668) != 0) {
    *(undefined4 *)(param_1 + 0x670) = 0;
    (**(code **)(puVar1 + 0x30))(9);
    *(undefined8 *)(param_1 + 0x668) = 0;
    *(undefined4 *)(param_1 + 0x674) = 0;
  }
  if (*(long *)(param_1 + 0x678) != 0) {
    *(undefined4 *)(param_1 + 0x680) = 0;
    (**(code **)(puVar1 + 0x30))(9);
    *(undefined8 *)(param_1 + 0x678) = 0;
    *(undefined4 *)(param_1 + 0x684) = 0;
  }
  if (*(int *)(param_1 + 0x648) != 0) {
    uVar11 = 0;
    do {
      lVar10 = *(long *)(param_1 + 0x640);
      plVar3 = *(long **)(lVar10 + uVar11 * 8);
      if (plVar3 != (long *)0x0) {
        do {
          plVar3 = (long *)*plVar3;
          (**(code **)(puVar1 + 0x30))(0xb);
        } while (plVar3 != (long *)0x0);
        lVar10 = *(long *)(param_1 + 0x640);
      }
      *(undefined8 *)(lVar10 + uVar11 * 8) = 0;
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(param_1 + 0x648));
  }
  *(undefined4 *)(param_1 + 0x650) = 0;
  if (*(long *)(param_1 + 0x640) != 0) {
    *(undefined4 *)(param_1 + 0x648) = 0;
    (**(code **)(puVar1 + 0x30))(0xb);
    *(undefined8 *)(param_1 + 0x640) = 0;
    *(undefined4 *)(param_1 + 0x64c) = 0;
  }
  if (*(int *)(param_1 + 0x610) != 0) {
    uVar11 = 0;
    do {
      lVar10 = *(long *)(param_1 + 0x608);
      plVar3 = *(long **)(lVar10 + uVar11 * 8);
      if (plVar3 != (long *)0x0) {
        do {
          plVar3 = (long *)*plVar3;
          (**(code **)(puVar1 + 0x30))(0xb);
        } while (plVar3 != (long *)0x0);
        lVar10 = *(long *)(param_1 + 0x608);
      }
      *(undefined8 *)(lVar10 + uVar11 * 8) = 0;
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(param_1 + 0x610));
  }
  *(undefined4 *)(param_1 + 0x618) = 0;
  if (*(long *)(param_1 + 0x608) != 0) {
    *(undefined4 *)(param_1 + 0x610) = 0;
    (**(code **)(puVar1 + 0x30))(0xb);
    *(undefined8 *)(param_1 + 0x608) = 0;
    *(undefined4 *)(param_1 + 0x614) = 0;
  }
  if (*(long *)(param_1 + 0x598) != 0) {
    *(undefined4 *)(param_1 + 0x5a0) = 0;
    (**(code **)(puVar1 + 0x30))(10);
    *(undefined8 *)(param_1 + 0x598) = 0;
    *(undefined4 *)(param_1 + 0x5a4) = 0;
  }
  *(undefined1 *)(param_1 + 0x5a8) = 0;
  if (*(long *)(param_1 + 0x5b0) != 0) {
    *(undefined4 *)(param_1 + 0x5b8) = 0;
    (**(code **)(puVar1 + 0x30))(10);
    *(undefined8 *)(param_1 + 0x5b0) = 0;
    *(undefined4 *)(param_1 + 0x5bc) = 0;
  }
  *(undefined1 *)(param_1 + 0x5c0) = 0;
  if (*(long *)(param_1 + 0x518) != 0) {
    *(undefined4 *)(param_1 + 0x520) = 0;
    (**(code **)(puVar1 + 0x30))(10);
    *(undefined8 *)(param_1 + 0x518) = 0;
    *(undefined4 *)(param_1 + 0x524) = 0;
  }
  *(undefined1 *)(param_1 + 0x528) = 0;
  if (*(long *)(param_1 + 0x530) != 0) {
    *(undefined4 *)(param_1 + 0x538) = 0;
    (**(code **)(puVar1 + 0x30))(10);
    *(undefined8 *)(param_1 + 0x530) = 0;
    *(undefined4 *)(param_1 + 0x53c) = 0;
  }
  *(undefined1 *)(param_1 + 0x540) = 0;
  if (*(long *)(param_1 + 0x498) != 0) {
    *(undefined4 *)(param_1 + 0x4a0) = 0;
    (**(code **)(puVar1 + 0x30))(10);
    *(undefined8 *)(param_1 + 0x498) = 0;
    *(undefined4 *)(param_1 + 0x4a4) = 0;
  }
  *(undefined1 *)(param_1 + 0x4a8) = 0;
  if (*(long *)(param_1 + 0x4b0) != 0) {
    *(undefined4 *)(param_1 + 0x4b8) = 0;
    (**(code **)(puVar1 + 0x30))(10);
    *(undefined8 *)(param_1 + 0x4b0) = 0;
    *(undefined4 *)(param_1 + 0x4bc) = 0;
  }
  *(undefined1 *)(param_1 + 0x4c0) = 0;
  if (*(long *)(param_1 + 0x418) != 0) {
    *(undefined4 *)(param_1 + 0x420) = 0;
    (**(code **)(puVar1 + 0x30))(10);
    *(undefined8 *)(param_1 + 0x418) = 0;
    *(undefined4 *)(param_1 + 0x424) = 0;
  }
  *(undefined1 *)(param_1 + 0x428) = 0;
  if (*(long *)(param_1 + 0x430) != 0) {
    *(undefined4 *)(param_1 + 0x438) = 0;
    (**(code **)(puVar1 + 0x30))(10);
    *(undefined8 *)(param_1 + 0x430) = 0;
    *(undefined4 *)(param_1 + 0x43c) = 0;
  }
  *(undefined1 *)(param_1 + 0x440) = 0;
  if (*(long *)(param_1 + 0x308) != 0) {
    *(undefined4 *)(param_1 + 0x310) = 0;
    (**(code **)(puVar1 + 0x30))(10);
    *(undefined8 *)(param_1 + 0x308) = 0;
    *(undefined4 *)(param_1 + 0x314) = 0;
  }
  *(undefined1 *)(param_1 + 0x318) = 0;
  if (*(long *)(param_1 + 800) != 0) {
    *(undefined4 *)(param_1 + 0x328) = 0;
    (**(code **)(puVar1 + 0x30))(10);
    *(undefined8 *)(param_1 + 800) = 0;
    *(undefined4 *)(param_1 + 0x32c) = 0;
  }
  *(undefined1 *)(param_1 + 0x330) = 0;
  if (*(long *)(param_1 + 0x288) != 0) {
    *(undefined4 *)(param_1 + 0x290) = 0;
    (**(code **)(puVar1 + 0x30))(10);
    *(undefined8 *)(param_1 + 0x288) = 0;
    *(undefined4 *)(param_1 + 0x294) = 0;
  }
  *(undefined1 *)(param_1 + 0x298) = 0;
  if (*(long *)(param_1 + 0x2a0) != 0) {
    *(undefined4 *)(param_1 + 0x2a8) = 0;
    (**(code **)(puVar1 + 0x30))(10);
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    *(undefined4 *)(param_1 + 0x2ac) = 0;
  }
  *(undefined1 *)(param_1 + 0x2b0) = 0;
  if (*(long *)(param_1 + 0x208) != 0) {
    *(undefined4 *)(param_1 + 0x210) = 0;
    (**(code **)(puVar1 + 0x30))(10);
    *(undefined8 *)(param_1 + 0x208) = 0;
    *(undefined4 *)(param_1 + 0x214) = 0;
  }
  *(undefined1 *)(param_1 + 0x218) = 0;
  if (*(long *)(param_1 + 0x220) != 0) {
    *(undefined4 *)(param_1 + 0x228) = 0;
    (**(code **)(puVar1 + 0x30))(10);
    *(undefined8 *)(param_1 + 0x220) = 0;
    *(undefined4 *)(param_1 + 0x22c) = 0;
  }
  *(undefined1 *)(param_1 + 0x230) = 0;
  if (*(long *)(param_1 + 0x188) != 0) {
    *(undefined4 *)(param_1 + 400) = 0;
    (**(code **)(puVar1 + 0x30))(10);
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined4 *)(param_1 + 0x194) = 0;
  }
  *(undefined1 *)(param_1 + 0x198) = 0;
  if (*(long *)(param_1 + 0x1a0) != 0) {
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    (**(code **)(puVar1 + 0x30))(10);
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined4 *)(param_1 + 0x1ac) = 0;
  }
  *(undefined1 *)(param_1 + 0x1b0) = 0;
  if (*(long *)(param_1 + 0x78) != 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    (**(code **)(puVar1 + 0x30))(9);
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  plVar3 = *(long **)(param_1 + 0x50);
  uVar5 = *(uint *)(param_1 + 0x58);
  if (uVar5 != 0) {
    plVar4 = plVar3;
    do {
      lVar10 = *plVar4;
      uVar6 = *(uint *)(lVar10 + 0x58);
      if (uVar6 != 0) {
        lVar9 = (ulong)uVar6 << 3;
        plVar8 = *(long **)(lVar10 + 0x50);
LAB_03416494:
        if (*plVar8 != param_1) goto code_r0x034164a0;
        plVar3 = *(long **)(lVar10 + 0x50) + ((ulong)uVar6 - 1);
        if (plVar8 < plVar3) {
          do {
            plVar7 = plVar8 + 1;
            *plVar8 = *plVar7;
            plVar8 = plVar7;
          } while (plVar7 < plVar3);
          uVar6 = *(uint *)(lVar10 + 0x58);
        }
        *(uint *)(lVar10 + 0x58) = uVar6 - 1;
        *(undefined1 *)(lVar10 + 0x60) = 1;
        plVar3 = *(long **)(param_1 + 0x50);
        uVar5 = *(uint *)(param_1 + 0x58);
      }
LAB_034164ec:
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar3 + uVar5);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x60) = 1;
  if (plVar3 != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    (**(code **)(puVar1 + 0x30))(9);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  if ((*(long *)(param_1 + 0x40) != 0) && (*(char *)(param_1 + 0x48) != '\0')) {
    (**(code **)(puVar1 + 0x30))(9);
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
code_r0x034164a0:
  plVar8 = plVar8 + 1;
  lVar9 = lVar9 + -8;
  if (lVar9 == 0) goto LAB_034164ec;
  goto LAB_03416494;
}


