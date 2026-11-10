/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f9bb5c; name: FUN_01f9bb5c
 */


void FUN_01f9bb5c(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 local_588;
  undefined8 local_580;
  undefined8 local_578;
  undefined1 auStack_570 [8];
  long local_568;
  undefined1 auStack_530 [8];
  long local_528;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined1 auStack_4d8 [8];
  long local_4d0;
  undefined1 auStack_498 [8];
  long local_490;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined1 auStack_440 [8];
  long local_438;
  undefined1 auStack_400 [8];
  long local_3f8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined1 auStack_3a8 [8];
  long local_3a0;
  undefined1 auStack_368 [8];
  long local_360;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined1 auStack_310 [8];
  long local_308;
  undefined1 auStack_2d0 [8];
  long local_2c8;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined1 auStack_278 [8];
  long local_270;
  undefined1 auStack_238 [8];
  long local_230;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  undefined1 auStack_1a0 [8];
  long local_198;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined1 auStack_148 [8];
  long local_140;
  undefined1 auStack_108 [8];
  long local_100;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [8];
  long local_a8;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar1 = *param_1;
  if (((((((((*(char *)(lVar1 + 0x38) == '\0') &&
            (lVar2 = *(long *)(*(long *)(lVar1 + 0x90) + 0x20), lVar2 != 0)) &&
           ((*(byte *)(lVar2 + 0x1e8) & 1) != 0)) &&
          ((lVar2 = *(long *)(*(long *)(lVar1 + 0x90) + 0x60), lVar2 != 0 &&
           ((*(byte *)(lVar2 + 0x1e8) & 1) != 0)))) &&
         (lVar2 = *(long *)(*(long *)(lVar1 + 0xb0) + 0x20), lVar2 != 0)) &&
        (((((*(byte *)(lVar2 + 0x1e8) & 1) != 0 &&
           (lVar2 = *(long *)(*(long *)(lVar1 + 0xb0) + 0x60), lVar2 != 0)) &&
          (((*(byte *)(lVar2 + 0x1e8) & 1) != 0 &&
           (((lVar2 = *(long *)(*(long *)(lVar1 + 0xd0) + 0x20), lVar2 != 0 &&
             ((*(byte *)(lVar2 + 0x1e8) & 1) != 0)) &&
            (lVar2 = *(long *)(*(long *)(lVar1 + 0xd0) + 0x60), lVar2 != 0)))))) &&
         (((*(byte *)(lVar2 + 0x1e8) & 1) != 0 &&
          (lVar2 = *(long *)(*(long *)(lVar1 + 0xf0) + 0x20), lVar2 != 0)))))) &&
       (((*(byte *)(lVar2 + 0x1e8) & 1) != 0 &&
        (((lVar2 = *(long *)(*(long *)(lVar1 + 0xf0) + 0x60), lVar2 != 0 &&
          ((*(byte *)(lVar2 + 0x1e8) & 1) != 0)) &&
         ((lVar2 = *(long *)(*(long *)(lVar1 + 0x110) + 0x20), lVar2 != 0 &&
          ((((*(byte *)(lVar2 + 0x1e8) & 1) != 0 &&
            (lVar2 = *(long *)(*(long *)(lVar1 + 0x110) + 0x60), lVar2 != 0)) &&
           ((*(byte *)(lVar2 + 0x1e8) & 1) != 0)))))))))) &&
      (((lVar2 = *(long *)(*(long *)(lVar1 + 0x130) + 0x20), lVar2 != 0 &&
        ((*(byte *)(lVar2 + 0x1e8) & 1) != 0)) &&
       (lVar2 = *(long *)(*(long *)(lVar1 + 0x130) + 0x60), lVar2 != 0)))) &&
     (((((((*(byte *)(lVar2 + 0x1e8) & 1) != 0 &&
          (lVar2 = *(long *)(*(long *)(lVar1 + 0x150) + 0x20), lVar2 != 0)) &&
         (((*(byte *)(lVar2 + 0x1e8) & 1) != 0 &&
          ((((lVar2 = *(long *)(*(long *)(lVar1 + 0x150) + 0x60), lVar2 != 0 &&
             ((*(byte *)(lVar2 + 0x1e8) & 1) != 0)) &&
            (lVar2 = *(long *)(*(long *)(lVar1 + 0x170) + 0x20), lVar2 != 0)) &&
           (((*(byte *)(lVar2 + 0x1e8) & 1) != 0 &&
            (lVar2 = *(long *)(*(long *)(lVar1 + 0x170) + 0x60), lVar2 != 0)))))))) &&
        (((*(byte *)(lVar2 + 0x1e8) & 1) != 0 &&
         ((lVar2 = *(long *)(*(long *)(lVar1 + 0x198) + 0x20), lVar2 != 0 &&
          ((*(byte *)(lVar2 + 0x1e8) & 1) != 0)))))) &&
       (((((lVar2 = *(long *)(*(long *)(lVar1 + 0x198) + 0x60), lVar2 != 0 &&
           ((((*(byte *)(lVar2 + 0x1e8) & 1) != 0 &&
             (lVar2 = *(long *)(*(long *)(lVar1 + 0x1b8) + 0x20), lVar2 != 0)) &&
            ((*(byte *)(lVar2 + 0x1e8) & 1) != 0)))) &&
          (((lVar2 = *(long *)(*(long *)(lVar1 + 0x1b8) + 0x60), lVar2 != 0 &&
            ((*(byte *)(lVar2 + 0x1e8) & 1) != 0)) &&
           (lVar2 = *(long *)(*(long *)(lVar1 + 0x1d8) + 0x20), lVar2 != 0)))) &&
         (((*(byte *)(lVar2 + 0x1e8) & 1) != 0 &&
          (lVar2 = *(long *)(*(long *)(lVar1 + 0x1d8) + 0x60), lVar2 != 0)))) &&
        (((*(byte *)(lVar2 + 0x1e8) & 1) != 0 &&
         (((lVar2 = *(long *)(*(long *)(lVar1 + 0x1f8) + 0x20), lVar2 != 0 &&
           ((*(byte *)(lVar2 + 0x1e8) & 1) != 0)) &&
          (lVar2 = *(long *)(*(long *)(lVar1 + 0x1f8) + 0x60), lVar2 != 0)))))))) &&
      ((*(byte *)(lVar2 + 0x1e8) & 1) != 0)))) {
    FUN_00fb9e50(&local_c8,*(long *)(lVar1 + 0x90) + 0x18,*(long *)(lVar1 + 0x90) + 0x58);
    if (((local_68 == 0) || ((*(byte *)(local_68 + 0x1e8) & 1) != 0)) &&
       ((local_a8 == 0 || ((*(byte *)(local_a8 + 0x1e8) & 1) != 0)))) {
      local_160 = local_c8;
      local_158 = uStack_c0;
      local_150 = local_b8;
    }
    else {
      local_150 = 0;
      local_158 = 0;
      local_160 = 0;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0x90);
    puVar3[1] = local_158;
    puVar3[2] = local_150;
    *puVar3 = local_160;
    FUN_00fb9e50(&local_160,*(long *)(lVar1 + 0xb0) + 0x18,*(long *)(lVar1 + 0xb0) + 0x58);
    if (((local_100 == 0) || ((*(byte *)(local_100 + 0x1e8) & 1) != 0)) &&
       ((local_140 == 0 || ((*(byte *)(local_140 + 0x1e8) & 1) != 0)))) {
      local_1f8 = local_160;
      local_1f0 = local_158;
      local_1e8 = local_150;
    }
    else {
      local_1e8 = 0;
      local_1f0 = 0;
      local_1f8 = 0;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xb0);
    puVar3[1] = local_1f0;
    puVar3[2] = local_1e8;
    *puVar3 = local_1f8;
    FUN_00fb9e50(&local_1f8,*(long *)(lVar1 + 0xd0) + 0x18,*(long *)(lVar1 + 0xd0) + 0x58);
    if (((local_198 == 0) || ((*(byte *)(local_198 + 0x1e8) & 1) != 0)) &&
       ((local_1d8 == 0 || ((*(byte *)(local_1d8 + 0x1e8) & 1) != 0)))) {
      local_290 = local_1f8;
      local_288 = local_1f0;
      local_280 = local_1e8;
    }
    else {
      local_280 = 0;
      local_288 = 0;
      local_290 = 0;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xd0);
    puVar3[1] = local_288;
    puVar3[2] = local_280;
    *puVar3 = local_290;
    FUN_00fb9e50(&local_290,*(long *)(lVar1 + 0xf0) + 0x18,*(long *)(lVar1 + 0xf0) + 0x58);
    if (((local_230 == 0) || ((*(byte *)(local_230 + 0x1e8) & 1) != 0)) &&
       ((local_270 == 0 || ((*(byte *)(local_270 + 0x1e8) & 1) != 0)))) {
      local_328 = local_290;
      local_320 = local_288;
      local_318 = local_280;
    }
    else {
      local_318 = 0;
      local_320 = 0;
      local_328 = 0;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0xf0);
    puVar3[1] = local_320;
    puVar3[2] = local_318;
    *puVar3 = local_328;
    FUN_00fb9e50(&local_328,*(long *)(lVar1 + 0x110) + 0x18,*(long *)(lVar1 + 0x110) + 0x58);
    if (((local_2c8 == 0) || ((*(byte *)(local_2c8 + 0x1e8) & 1) != 0)) &&
       ((local_308 == 0 || ((*(byte *)(local_308 + 0x1e8) & 1) != 0)))) {
      local_3c0 = local_328;
      local_3b8 = local_320;
      local_3b0 = local_318;
    }
    else {
      local_3b8 = 0;
      local_3b0 = 0;
      local_3c0 = 0;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0x110);
    puVar3[1] = local_3b8;
    puVar3[2] = local_3b0;
    *puVar3 = local_3c0;
    FUN_00d5bffc(lVar1,*(undefined8 *)(lVar1 + 0x90));
    FUN_00d5bffc(lVar1,*(undefined8 *)(lVar1 + 0xb0));
    FUN_00d5bffc(lVar1,*(undefined8 *)(lVar1 + 0xd0));
    FUN_00d5bffc(lVar1,*(undefined8 *)(lVar1 + 0xf0));
    FUN_00d5bffc(lVar1,*(undefined8 *)(lVar1 + 0x110));
    FUN_00fb9e50(&local_3c0,*(long *)(lVar1 + 0x130) + 0x18,*(long *)(lVar1 + 0x130) + 0x58);
    if (((local_360 == 0) || ((*(byte *)(local_360 + 0x1e8) & 1) != 0)) &&
       ((local_3a0 == 0 || ((*(byte *)(local_3a0 + 0x1e8) & 1) != 0)))) {
      local_458 = local_3c0;
      local_450 = local_3b8;
      local_448 = local_3b0;
    }
    else {
      local_450 = 0;
      local_448 = 0;
      local_458 = 0;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0x130);
    puVar3[1] = local_450;
    puVar3[2] = local_448;
    *puVar3 = local_458;
    FUN_00db239c(auStack_368);
    FUN_00db239c(auStack_3a8);
    FUN_00fb9e50(&local_3c0,*(long *)(lVar1 + 0x150) + 0x18,*(long *)(lVar1 + 0x150) + 0x58);
    if (((local_360 == 0) || ((*(byte *)(local_360 + 0x1e8) & 1) != 0)) &&
       ((local_3a0 == 0 || ((*(byte *)(local_3a0 + 0x1e8) & 1) != 0)))) {
      local_458 = local_3c0;
      local_450 = local_3b8;
      local_448 = local_3b0;
    }
    else {
      local_450 = 0;
      local_448 = 0;
      local_458 = 0;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0x150);
    puVar3[1] = local_450;
    puVar3[2] = local_448;
    *puVar3 = local_458;
    FUN_00db239c(auStack_368);
    FUN_00db239c(auStack_3a8);
    FUN_00fb9e50(&local_3c0,*(long *)(lVar1 + 0x170) + 0x18,*(long *)(lVar1 + 0x170) + 0x58);
    if (((local_360 == 0) || ((*(byte *)(local_360 + 0x1e8) & 1) != 0)) &&
       ((local_3a0 == 0 || ((*(byte *)(local_3a0 + 0x1e8) & 1) != 0)))) {
      local_458 = local_3c0;
      local_450 = local_3b8;
      local_448 = local_3b0;
    }
    else {
      local_450 = 0;
      local_448 = 0;
      local_458 = 0;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0x170);
    puVar3[1] = local_450;
    puVar3[2] = local_448;
    *puVar3 = local_458;
    FUN_00db239c(auStack_368);
    FUN_00db239c(auStack_3a8);
    FUN_00d5bffc(lVar1,*(undefined8 *)(lVar1 + 0x130));
    FUN_00d5bffc(lVar1,*(undefined8 *)(lVar1 + 0x150));
    FUN_00d5bffc(lVar1,*(undefined8 *)(lVar1 + 0x170));
    FUN_00fb9e50(&local_3c0,*(long *)(lVar1 + 0x198) + 0x18,*(long *)(lVar1 + 0x198) + 0x58);
    if (((local_360 == 0) || ((*(byte *)(local_360 + 0x1e8) & 1) != 0)) &&
       ((local_3a0 == 0 || ((*(byte *)(local_3a0 + 0x1e8) & 1) != 0)))) {
      local_458 = local_3c0;
      local_450 = local_3b8;
      local_448 = local_3b0;
    }
    else {
      local_450 = 0;
      local_448 = 0;
      local_458 = 0;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0x198);
    puVar3[1] = local_450;
    puVar3[2] = local_448;
    *puVar3 = local_458;
    FUN_00fb9e50(&local_458,*(long *)(lVar1 + 0x1b8) + 0x18,*(long *)(lVar1 + 0x1b8) + 0x58);
    if (((local_3f8 == 0) || ((*(byte *)(local_3f8 + 0x1e8) & 1) != 0)) &&
       ((local_438 == 0 || ((*(byte *)(local_438 + 0x1e8) & 1) != 0)))) {
      local_4f0 = local_458;
      local_4e8 = local_450;
      local_4e0 = local_448;
    }
    else {
      local_4e8 = 0;
      local_4e0 = 0;
      local_4f0 = 0;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0x1b8);
    puVar3[1] = local_4e8;
    puVar3[2] = local_4e0;
    *puVar3 = local_4f0;
    FUN_00fb9e50(&local_4f0,*(long *)(lVar1 + 0x1d8) + 0x18,*(long *)(lVar1 + 0x1d8) + 0x58);
    if (((local_490 == 0) || ((*(byte *)(local_490 + 0x1e8) & 1) != 0)) &&
       ((local_4d0 == 0 || ((*(byte *)(local_4d0 + 0x1e8) & 1) != 0)))) {
      local_588 = local_4f0;
      local_580 = local_4e8;
      local_578 = local_4e0;
    }
    else {
      local_580 = 0;
      local_578 = 0;
      local_588 = 0;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0x1d8);
    puVar3[1] = local_580;
    puVar3[2] = local_578;
    *puVar3 = local_588;
    FUN_00fb9e50(&local_588,*(long *)(lVar1 + 0x1f8) + 0x18,*(long *)(lVar1 + 0x1f8) + 0x58);
    if (((local_528 == 0) || ((*(byte *)(local_528 + 0x1e8) & 1) != 0)) &&
       ((local_568 == 0 || ((*(byte *)(local_568 + 0x1e8) & 1) != 0)))) {
      local_5a0 = local_588;
      local_598 = local_580;
      local_590 = local_578;
    }
    else {
      local_598 = 0;
      local_590 = 0;
      local_5a0 = 0;
    }
    puVar3 = *(undefined8 **)(lVar1 + 0x1f8);
    puVar3[1] = local_598;
    puVar3[2] = local_590;
    *puVar3 = local_5a0;
    FUN_01f9c4e0(lVar1,*(undefined8 *)(lVar1 + 0x198));
    FUN_01f9c4e0(lVar1,*(undefined8 *)(lVar1 + 0x1b8));
    FUN_01f9c4e0(lVar1,*(undefined8 *)(lVar1 + 0x1d8));
    FUN_01f9c4e0(lVar1,*(undefined8 *)(lVar1 + 0x1f8));
    *(undefined1 *)(lVar1 + 0x38) = 1;
    FUN_00db239c(auStack_530);
    FUN_00db239c(auStack_570);
    FUN_00db239c(auStack_498);
    FUN_00db239c(auStack_4d8);
    FUN_00db239c(auStack_400);
    FUN_00db239c(auStack_440);
    FUN_00db239c(auStack_368);
    FUN_00db239c(auStack_3a8);
    FUN_00db239c(auStack_2d0);
    FUN_00db239c(auStack_310);
    FUN_00db239c(auStack_238);
    FUN_00db239c(auStack_278);
    FUN_00db239c(auStack_1a0);
    FUN_00db239c(auStack_1e0);
    FUN_00db239c(auStack_108);
    FUN_00db239c(auStack_148);
    FUN_00db239c(auStack_70);
    FUN_00db239c(auStack_b0);
  }
  return;
}


