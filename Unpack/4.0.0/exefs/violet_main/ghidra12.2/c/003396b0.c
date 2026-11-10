/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003396b0; name: FUN_003396b0
 */


void FUN_003396b0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  size_t __n;
  ulong *puVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 *local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  long local_80 [4];
  
  *param_1 = 0;
  puVar3 = PTR_LAB_047cba48;
  puVar2 = PTR_FUN_047cba38;
  local_98 = (long *)0x0;
  local_90 = (long *)0x0;
  local_88 = (long *)0x0;
  uVar9 = *DAT_047ef500;
  if (1 < uVar9) {
    uVar14 = 0;
    do {
      local_80[0] = 0;
      if ((uVar9 & 1) == 0) {
        puVar7 = DAT_047ef500 + 1;
      }
      else {
        puVar7 = (ulong *)DAT_047ef500[1];
      }
                    /* try { // try from 0033974c to 0033975b has its CatchHandler @ 00339958 */
      (**(code **)(*(long *)puVar7[uVar14] + 0x18))
                (&local_a0,(long *)puVar7[uVar14],param_2,local_80);
      if (local_80[0] != 0) {
        if (local_90 == local_88) {
          lVar12 = (long)local_90 - (long)local_98 >> 3;
          uVar9 = lVar12 + 1;
          if (uVar9 >> 0x3d != 0) {
                    /* try { // try from 00339910 to 00339917 has its CatchHandler @ 00339918 */
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          uVar11 = (long)local_88 - (long)local_98 >> 2;
          if (uVar9 <= uVar11) {
            uVar9 = uVar11;
          }
          if (0xffffffffffffffe < (ulong)((long)local_88 - (long)local_98 >> 3)) {
            uVar9 = 0x1fffffffffffffff;
          }
          if (uVar9 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = FUN_0049e770(puVar2,uVar9 << 3);
          }
          plVar8 = (long *)(lVar5 + lVar12 * 8);
          plVar10 = (long *)(lVar5 + uVar9 * 8);
          *plVar8 = local_80[0];
          __n = (long)local_90 - (long)local_98;
          plVar13 = (long *)((long)plVar8 - __n);
          if (0 < (long)__n) {
            memcpy(plVar13,local_98,__n);
          }
          bVar1 = local_98 != (long *)0x0;
          local_98 = plVar13;
          local_90 = plVar8 + 1;
          local_88 = plVar10;
          if (bVar1) {
            FUN_0049e790(puVar3);
          }
        }
        else {
          *local_90 = local_80[0];
          local_90 = local_90 + 1;
        }
      }
                    /* try { // try from 0033980c to 00339817 has its CatchHandler @ 00339924 */
      FUN_00339b7c(param_1,&local_a0);
      puVar4 = local_a0;
      local_a0 = (undefined8 *)0x0;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4);
        FUN_0049e790(puVar3,puVar4);
      }
      uVar14 = uVar14 + 1;
      uVar9 = *DAT_047ef500;
    } while (uVar14 < uVar9 >> 1);
    plVar8 = local_90;
    if (local_98 != local_90) {
                    /* try { // try from 00339850 to 0033987f has its CatchHandler @ 0033991c */
      FUN_003673f0(local_80,"methodConfig");
      uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/service_config_parser.cc"
                           ,0x52,local_80,local_98,(long)local_90 - (long)local_98 >> 3);
      plVar8 = local_98;
      if (local_90 != local_98) {
        uVar9 = 0;
        plVar10 = local_90;
        plVar13 = local_98;
        do {
          if (4 < (ulong)plVar13[uVar9]) {
                    /* try { // try from 00339900 to 00339903 has its CatchHandler @ 00339920 */
            FUN_00350fd0();
            plVar8 = local_98;
            plVar10 = local_90;
            plVar13 = local_98;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < (ulong)((long)plVar10 - (long)plVar13 >> 3));
      }
      *param_3 = uVar6;
    }
    if (plVar8 != (long *)0x0) {
      local_90 = plVar8;
      FUN_0049e790(PTR_LAB_047cba48,plVar8);
    }
  }
  return;
}


