/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03066320; name: FUN_03066320
 */


void FUN_03066320(undefined8 param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if ((*(uint *)((long)param_2 + 0xc) & 0x7fffffe0) == 0) {
    FUN_030669a4(param_2);
  }
  uVar2 = *(uint *)(param_2 + 1);
  uVar4 = (ulong)(int)uVar2;
  if ((int)uVar2 < 0x20) {
    lVar6 = *param_2;
    *(undefined4 *)(param_2 + 1) = 0x20;
    if ((uVar4 & 1) != 0) {
      puVar7 = (undefined8 *)(lVar6 + uVar4 * 0x10);
      *puVar7 = 0;
      puVar7[1] = 0x8000000000000000;
      uVar4 = uVar4 + 1;
    }
    if (uVar2 != 0x1f) {
      lVar5 = uVar4 - 0x20;
      puVar7 = (undefined8 *)(lVar6 + uVar4 * 0x10 + 0x10);
      do {
        puVar7[-2] = 0;
        puVar7[-1] = 0x8000000000000000;
        lVar5 = lVar5 + 2;
        *puVar7 = 0;
        puVar7[1] = 0x8000000000000000;
        puVar7 = puVar7 + 4;
      } while (lVar5 != 0);
    }
  }
  else if (uVar2 != 0x20) {
    *(undefined4 *)(param_2 + 1) = 0x20;
    puVar3 = PTR_PTR_047d1a50;
    lVar6 = *param_2;
    lVar5 = (ulong)uVar2 << 4;
    do {
      lVar1 = lVar6 + lVar5;
      *(undefined4 *)(lVar1 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar1 + -4)) && (*(long *)(lVar1 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar3 + 0x20))
                  (puVar3,*(long *)(lVar1 + -0x10),(ulong)*(uint *)(lVar1 + -4) << 5);
      }
      lVar5 = lVar5 + -0x10;
      *(undefined8 *)(lVar1 + -0x10) = 0;
      *(undefined4 *)(lVar1 + -4) = 0x80000000;
    } while (lVar5 != 0x200);
  }
  FUN_030661a4(param_1,0,*param_2);
  FUN_030661a4(param_1,1,*param_2 + 0x10);
  FUN_030661a4(param_1,2,*param_2 + 0x20);
  FUN_030661a4(param_1,3,*param_2 + 0x30);
  FUN_030661a4(param_1,4,*param_2 + 0x40);
  FUN_030661a4(param_1,5,*param_2 + 0x50);
  FUN_030661a4(param_1,6,*param_2 + 0x60);
  FUN_030661a4(param_1,7,*param_2 + 0x70);
  FUN_030661a4(param_1,8,*param_2 + 0x80);
  FUN_030661a4(param_1,9,*param_2 + 0x90);
  FUN_030661a4(param_1,10,*param_2 + 0xa0);
  FUN_030661a4(param_1,0xb,*param_2 + 0xb0);
  FUN_030661a4(param_1,0xc,*param_2 + 0xc0);
  FUN_030661a4(param_1,0xd,*param_2 + 0xd0);
  FUN_030661a4(param_1,0xe,*param_2 + 0xe0);
  FUN_030661a4(param_1,0xf,*param_2 + 0xf0);
  FUN_030661a4(param_1,0x10,*param_2 + 0x100);
  FUN_030661a4(param_1,0x11,*param_2 + 0x110);
  FUN_030661a4(param_1,0x12,*param_2 + 0x120);
  FUN_030661a4(param_1,0x13,*param_2 + 0x130);
  FUN_030661a4(param_1,0x14,*param_2 + 0x140);
  FUN_030661a4(param_1,0x15,*param_2 + 0x150);
  FUN_030661a4(param_1,0x16,*param_2 + 0x160);
  FUN_030661a4(param_1,0x17,*param_2 + 0x170);
  FUN_030661a4(param_1,0x18,*param_2 + 0x180);
  FUN_030661a4(param_1,0x19,*param_2 + 400);
  FUN_030661a4(param_1,0x1a,*param_2 + 0x1a0);
  FUN_030661a4(param_1,0x1b,*param_2 + 0x1b0);
  FUN_030661a4(param_1,0x1c,*param_2 + 0x1c0);
  FUN_030661a4(param_1,0x1d,*param_2 + 0x1d0);
  FUN_030661a4(param_1,0x1e,*param_2 + 0x1e0);
  FUN_030661a4(param_1,0x1f,*param_2 + 0x1f0);
  return;
}


