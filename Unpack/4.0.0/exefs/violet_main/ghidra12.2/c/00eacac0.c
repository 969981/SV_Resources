/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00eacac0; name: FUN_00eacac0
 */


void FUN_00eacac0(long param_1,long *param_2,ulong param_3)

{
  undefined4 uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = param_3 & 0xffffffff;
  lVar5 = uVar4 * 0x20 + (param_3 & 0xffffffff);
  FUN_00eb2d18(*(undefined8 *)(*param_2 + 200),
               *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar5 * 8 + 0xe8),1);
  lVar3 = *(long *)(param_1 + 0x88) + lVar5 * 8;
  FUN_00eacd1c(*param_2,0,*(undefined4 *)(lVar3 + 0xb8),*(undefined4 *)(lVar3 + 0xbc));
  FUN_00eb3bec(*(undefined8 *)(*param_2 + 200),
               *(undefined1 *)(*(long *)(param_1 + 0x88) + lVar5 * 8 + 0xc0));
  FUN_00eb4900(*(undefined8 *)(*param_2 + 200),
               *(undefined1 *)(*(long *)(param_1 + 0x88) + lVar5 * 8 + 0xc1));
  FUN_00eb6a8c(*(undefined8 *)(*param_2 + 200),
               *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar5 * 8 + 0xc4));
  *(ulong *)(*param_2 + 0x108) =
       *(ulong *)(*param_2 + 0x108) & 0xfffffffffffffffd |
       (ulong)*(byte *)(*(long *)(param_1 + 0x88) + lVar5 * 8 + 0xf1) << 1;
  FUN_00eb2008(*(undefined8 *)(*param_2 + 200),
               *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar5 * 8 + 0xec));
  lVar3 = *(long *)(param_1 + 0x88);
  if (*(int *)(lVar3 + lVar5 * 8 + 0xec) == 2) {
    FUN_0151f580(0x40000000,*(undefined8 *)(*param_2 + 200));
    lVar3 = *(long *)(param_1 + 0x88);
  }
  FUN_00eb7830(*(undefined8 *)(*param_2 + 200),*(undefined1 *)(lVar3 + uVar4 * 0x108 + 200));
  FUN_00eb93e8(*(undefined8 *)(*param_2 + 200));
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x88) + uVar4 * 0x108 + 0xdc);
  FUN_00eaf320(*(undefined8 *)(*param_2 + 200),uVar1,uVar1);
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x88) + uVar4 * 0x108 + 0xe0);
  FUN_00eafb68(*(undefined8 *)(*param_2 + 200),uVar1,uVar1);
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x88) + uVar4 * 0x108 + 0xe4);
  FUN_00eaeadc(*(undefined8 *)(*param_2 + 200),uVar1,uVar1);
  FUN_00ead254(*(undefined8 *)(*param_2 + 200),
               *(undefined1 *)(*(long *)(param_1 + 0x88) + uVar4 * 0x108 + 0xf0));
  lVar5 = *(long *)(param_1 + 0x88) + uVar4 * 0x108;
  FUN_00eb85d8(*(undefined4 *)(lVar5 + 0xf8),*(undefined4 *)(lVar5 + 0xf4),
               *(undefined4 *)(lVar5 + 0xfc),*(undefined8 *)(*param_2 + 200),
               *(undefined4 *)(lVar5 + 0xec));
  lVar5 = *param_2;
  bVar2 = *(char *)(*(long *)(param_1 + 0x88) + uVar4 * 0x108 + 0x100) != '\0' &&
          *(char *)(lVar5 + 0x150) == '\0';
  FUN_00f190b8(*(undefined8 *)(lVar5 + 200),bVar2,1);
  *(bool *)(lVar5 + 0x158) = bVar2;
  FUN_00eada7c(*(undefined8 *)(*param_2 + 200),
               *(undefined1 *)(*(long *)(param_1 + 0x88) + uVar4 * 0x108 + 0x101));
  FUN_00eae2a4(*(undefined4 *)(*(long *)(param_1 + 0x88) + uVar4 * 0x108 + 0x104),
               *(undefined8 *)(*param_2 + 200));
  return;
}


