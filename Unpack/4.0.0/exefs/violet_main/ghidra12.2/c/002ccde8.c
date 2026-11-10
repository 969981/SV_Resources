/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002ccde8; name: FUN_002ccde8
 */


/* WARNING: Removing unreachable block (ram,0x002ccf54) */

undefined8 FUN_002ccde8(long param_1,long param_2,undefined8 *param_3,uint param_4)

{
  uint uVar1;
  byte *pbVar2;
  ostream *poVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined1 *__s;
  undefined8 *puVar7;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (*(int *)(param_2 + 0x40) == 0) {
    if ((int)param_4 <= *(int *)(param_2 + 0x90)) {
      uVar1 = 0;
      if (param_4 != 0) {
        uVar1 = param_4 + 1;
      }
      uStack_78 = 0;
      local_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_168 = 0;
      local_170 = 0;
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      local_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      local_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      local_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_138 = 0;
      local_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_158 = 0;
      local_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      if ((int)uVar1 < 0x12) {
        __s = (undefined1 *)0x0;
        puVar7 = &local_170;
      }
      else {
        __s = (undefined1 *)FUN_0049e7b0(PTR_FUN_047cba38,(ulong)uVar1 << 4,2);
        if (__s != (undefined1 *)0x0) {
          memset(__s,0,(ulong)uVar1 << 4);
        }
        puVar7 = (undefined8 *)__s;
      }
      uVar4 = FUN_002cd010(param_2,param_1,0,*(undefined8 *)(param_1 + 8),2,puVar7,uVar1);
      if ((uVar4 & 1) != 0) {
        if ((param_3 == (undefined8 *)0x0) || (param_4 == 0)) {
LAB_002ccfd8:
          if (__s != (undefined1 *)0x0) {
            FUN_0049e800(__s);
            FUN_0049e7e0(PTR_LAB_047cba48,__s);
          }
          return 1;
        }
        uVar4 = (ulong)(param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU));
        puVar7 = (undefined8 *)((long)puVar7 + 0x18);
        do {
          if (uVar4 == 0) goto LAB_002ccfd8;
          uVar5 = (*(code *)((undefined8 *)*param_3)[1])(puVar7[-1],*puVar7,*(undefined8 *)*param_3)
          ;
          uVar4 = uVar4 - 1;
          puVar7 = puVar7 + 2;
          param_3 = param_3 + 1;
        } while ((uVar5 & 1) != 0);
      }
      if (__s != (undefined1 *)0x0) {
        FUN_0049e800(__s);
        FUN_0049e7e0(PTR_LAB_047cba48,__s);
      }
    }
  }
  else if (*(char *)(param_2 + 0x1e) != '\0') {
    FUN_002cc810(&local_170,"external/com_github_google_re2/re2/re2.cc",0x378);
                    /* try { // try from 002cce54 to 002cce83 has its CatchHandler @ 002ccffc */
    poVar3 = std::__put_character_sequence<char,std::char_traits<char>>
                       ((ostream *)&uStack_168,"Invalid RE2: ",0xd);
    pbVar6 = *(byte **)(param_2 + 0x38);
    uVar4 = *(ulong *)(pbVar6 + 8);
    pbVar2 = *(byte **)(pbVar6 + 0x10);
    if ((*pbVar6 & 1) == 0) {
      pbVar2 = pbVar6 + 1;
      uVar4 = (ulong)(*pbVar6 >> 1);
    }
    std::__put_character_sequence<char,std::char_traits<char>>(poVar3,(char *)pbVar2,uVar4);
    FUN_002cc97c(&local_170);
  }
  return 0;
}


